
# include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"
# include <iostream>

int main() {

    std::cout << std::endl;
    {   
        Bureaucrat	John("John", 1);
        Bureaucrat	Alice("Alice", 140);

        RobotomyRequestForm	form("Captcha");
        Alice.signForm(form);
        John.signForm(form);
        form.execute(John);
        form.execute(Alice);
        std::cout << std::endl;
    }
    std::cout << std::endl;
    {
        Bureaucrat	John("John", 1);
		Bureaucrat	Alice("Alice", 140);

		PresidentialPardonForm	form("Confidential");
		Alice.signForm(form);
		John.signForm(form);
		form.execute(John);
		form.execute(Alice);
        std::cout << std::endl;
    }
    std::cout << std::endl;
    {
		Bureaucrat	John("John", 1);
		Bureaucrat	Alice("Alice", 140);

		ShrubberyCreationForm	form("tree");
		Alice.signForm(form);
		form.execute(John);
		form.execute(Alice);
        std::cout << std::endl;
	}
    return 0;
}
