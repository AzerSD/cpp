#include "Intern.hpp"
#include "Colors.hpp"

Intern::Intern()
{
	std::cout << GREEN << "Intern Default Constructor Called" << RST << std::endl;
}

Intern::Intern(Intern const &cpy)
{
	(void) cpy;
	std::cout << GREEN << "Intern Copy Constructor Called" << RST << std::endl;
}

Intern::~Intern()
{
    std::cout << RED << "Intern Destructor called" << RST << std::endl;
}

Intern &Intern::operator=(Intern const &obj)
{
	(void) obj;
    std::cout << "Intern Copy assignment operator called" << std::endl;
	return *this;
}

AForm* Intern::makeForm(std::string const &name, std::string const &target) const
{
	int i = 0;
	std::string forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	while (i < 3 && forms[i] != name)
		i++;

	AForm* form = NULL;
    try {
        switch (i)
        {
            case 0:
                form = new ShrubberyCreationForm(target);
                break;
            case 1:
                form = new RobotomyRequestForm(target);
                break;
            case 2:
                form = new PresidentialPardonForm(target);
                break;
            default:
                throw std::runtime_error("Intern::FormDoesNotExistException");
        }
	    std::cout << "Intern created " << name << std::endl;
    } catch (const std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}
	return form;
}

