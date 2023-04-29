/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 02:06:16 by asioud            #+#    #+#             */
/*   Updated: 2023/04/29 11:37:59 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

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

    void displaySummary(int index) const {
        std::cout << '|' << std::right << std::setw(9) << index << '|';
        std::cout << std::right << std::setw(9) << truncate(firstName) << '|';
        std::cout << std::right << std::setw(9) << truncate(lastName) << '|';
        std::cout << std::right << std::setw(9) << truncate(nickname) << '|' << std::endl;
    }

    void displayDetails() const {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
    }

};


class PhoneBook {
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int currentContact;

public:
    PhoneBook() : currentContact(0) {}

    void addContact(const Contact &contact) {
        contacts[currentContact] = contact;
        currentContact = (currentContact + 1) % MAX_CONTACTS;
    }

    void listContacts() const {
        for (int i = 0; i < MAX_CONTACTS; ++i) {
            if (!contacts[i].getName().empty()) {
                std::cout << "Name: " << contacts[i].getName() << ",  \
                    Phone: " << contacts[i].getPhoneNumber() << std::endl;
            }
        }
    }
};


int main() {
    PhoneBook phoneBook;

    phoneBook.addContact(Contact("Alice", "555-1234"));
    phoneBook.addContact(Contact("Bob", "555-5678"));
    phoneBook.addContact(Contact("Charlie", "555-9012"));
    phoneBook.addContact(Contact("David", "555-3456"));
    phoneBook.addContact(Contact("Eve", "555-7890"));
    phoneBook.addContact(Contact("Frank", "555-2345"));
    phoneBook.addContact(Contact("Grace", "555-6789"));
    phoneBook.addContact(Contact("Heidi", "555-0123"));
    phoneBook.addContact(Contact("Ivan", "555-4567"));
    phoneBook.addContact(Contact("Hasdf", "555-0199"));

    phoneBook.listContacts();

    return 0;
}

// class Contact {
// private:
//     std::string firstName;
//     std::string lastName;
//     std::string nickname;
//     std::string phoneNumber;
//     std::string darkestSecret;

// public:
//     // Default constructor
//     Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

//     // Set the first name of the contact
//     void setFirstName(const std::string &newFirstName) {
//         firstName = newFirstName;
//     }

//     // Set the last name of the contact
//     void setLastName(const std::string &newLastName) {
//         lastName = newLastName;
//     }

//     // Set the nickname of the contact
//     void setNickname(const std::string &newNickname) {
//         nickname = newNickname;
//     }

//     // Set the phone number of the contact
//     void setPhoneNumber(const std::string &newPhoneNumber) {
//         phoneNumber = newPhoneNumber;
//     }

//     // Set the darkest secret of the contact
//     void setDarkestSecret(const std::string &newDarkestSecret) {
//         darkestSecret = newDarkestSecret;
//     }

//     // Check if the contact is empty (i.e., all fields are empty)
//     bool isEmpty() const {
//         return firstName.empty() && lastName.empty() && nickname.empty() && phoneNumber.empty() && darkestSecret.empty();
//     }

//     // Display the summary of the contact (index, first name, last name, nickname)
//     void displaySummary(int index) const {
//         std::cout << '|' << std::right << std::setw(9) << index << '|';
//         std::cout << std::right << std::setw(9) << truncate(firstName) << '|';
//         std::cout << std::right << std::setw(9) << truncate(lastName) << '|';
//         std::cout << std::right << std::setw(9) << truncate(nickname) << '|' << std::endl;
//     }

//     // Display the full details of the contact
//     void displayDetails() const {
//         std::cout << "First Name: " << firstName << std::endl;
//         std::cout << "Last Name: " << lastName << std::endl;
//         std::cout << "Nickname: " << nickname << std::endl;
//         std::cout << "Phone Number: " << phoneNumber << std::endl;
//         std::cout << "Darkest Secret: " << darkestSecret << std::endl;
//     }

// private:
//     // Truncate the string if it's longer than 9 characters, replacing the last character with a dot
//     std::string truncate(const std::string &str) const {
//         return (str.length() > 9) ? (str.substr(0, 8) + ".") : str;
//     }
// };

// // The PhoneBook class represents a phonebook containing a fixed-size array of contacts.
// class PhoneBook {
// private:
//     static const int MAX_CONTACTS = 8;
//     Contact contacts[MAX_CONTACTS];
//     int currentContact;

// public:
//     // Default constructor
//     PhoneBook() : currentContact(0) {}

//     // Add a contact to the phonebook, replacing the oldest one if the limit is reached
//     void addContact(const Contact &contact) {
//         contacts[currentContact] = contact;
//         currentContact = (currentContact + 1) % MAX_CONTACTS;
//     }

//     // List all contacts in the phonebook with a summary (index, first name, last name, nickname)
//     void listContacts() const {
//         for (int i = 