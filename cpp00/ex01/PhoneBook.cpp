/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 02:06:16 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 01:10:23 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RED = "\033[31m";
const std::string CYAN = "\033[36m";

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact() : firstName(""), lastName(""), nickname(""), \
                phoneNumber(""), darkestSecret("") {}

    void setFirstName(const std::string &newFirstName) {
        firstName = newFirstName;
    }

    void setLastName(const std::string &newLastName) {
        lastName = newLastName;
    }

    void setNickname(const std::string &newNickname) {
        nickname = newNickname;
    }

    void setPhoneNumber(const std::string &newPhoneNumber) {
        phoneNumber = newPhoneNumber;
    }

    void setDarkestSecret(const std::string &newDarkestSecret) {
        darkestSecret = newDarkestSecret;
    }

    bool isEmpty() const {
        return firstName.empty() && lastName.empty() && nickname.empty() && phoneNumber.empty() && darkestSecret.empty();
    }

    std::string truncate(const std::string &str, size_t maxLength = 10) const {
        if (str.length() <= maxLength) {
            return str;
        }
        return str.substr(0, maxLength - 1) + '.';
    }

    void displaySummary(int index) const {
        std::cout << YELLOW << '|' << std::right << std::setw(9) << index << '|';
        std::cout << std::right << std::setw(9) << truncate(firstName) << '|';
        std::cout << std::right << std::setw(9) << truncate(lastName) << '|';
        std::cout << std::right << std::setw(9) << truncate(nickname) << '|' << RESET << std::endl;
    }

    void displayDetails() const {
        std::cout << YELLOW << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << RESET << std::endl;
    }

};


class PhoneBook {
private:
    static const int MAX_CONTACTS = 8; // static: shared by all instances of the class
    Contact contacts[MAX_CONTACTS];
    int currentContact;

public:
    PhoneBook() : currentContact(0) {}
    
    void addContact(const Contact &contact) {
        contacts[currentContact] = contact;
        currentContact = (currentContact + 1) % MAX_CONTACTS;
    }

    int listContacts() const {
    /* const: read-only method */
        int i;
        for (i = 0; i < MAX_CONTACTS; ++i) {
            if (!contacts[i].isEmpty()) {
                contacts[i].displaySummary(i);
            }
        }
        return i;
    }

    void displayContact(int index) const {
        if (index >= 0 && index < MAX_CONTACTS && !contacts[index].isEmpty()) {
            contacts[index].displayDetails();
        }
    }

};


void addContact(PhoneBook &phoneBook) {
    Contact newContact;
    std::string input;

    std::cout << CYAN << "Enter first name: " << RESET;
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << CYAN << "Enter last name: " << RESET;
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << CYAN << "Enter nickname: " << RESET;
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << CYAN << "Enter phone number: " << RESET;
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << CYAN << "Enter darkest secret: " << RESET;
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    phoneBook.addContact(newContact);
}


void searchContact(PhoneBook &phoneBook) {
    int x = phoneBook.listContacts();
    int index;

    std::cout << CYAN << "Enter the index of the contact to display: " << RESET;
    std::cin >> index;

    if (std::cin.fail()) {
        std::cout << RED << "Invalid input. Please try again" << RESET << std::endl;
        std::cin.clear(); // Clear the error flags
    } else if (index >= x || index < 0)
        std::cout << RED << "Invalid index. Please try again." << RESET << std::endl;
    else
        phoneBook.displayContact(index);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); /* Ignore remaining input in the buffeR */

}


int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << GREEN << "Enter command (ADD, SEARCH, EXIT): " << RESET;

        std::getline(std::cin, command);

        if (command == "ADD")
            addContact(phoneBook);
        else if (command == "SEARCH")
            searchContact(phoneBook);
        else if (command == "EXIT")
            break;
        else
            std::cout << RED << "Invalid command. Please try again." << RESET << std::endl;
    }

    phoneBook.listContacts();
    return 0;
}
 