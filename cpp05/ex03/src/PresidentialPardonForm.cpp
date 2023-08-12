#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : \
	AForm("PresidentialPardonForm", 25), _target(target)
{
	std::cout << GREEN << "PresidentialPardonForm " << target << " Default Constructor Called" << RST << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : AForm(obj)
{
	_target = obj._target;
	std::cout << GREEN << "PresidentialPardonForm Copy Constructor Called" << RST << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << "PresidentialPardonForm " << this->_target << " Default Destructor Called" << RST << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const { return _target; }

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	if (this != &obj)
	{
		_target = obj._target;
		AForm::operator=(obj);
	}
	std::cout << GREEN << "PresidentialPardonForm Copy Assignment Operator Called" << RST << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try {
	if (getIsSigned() == false)
		throw std::runtime_error("AForm::FormIsNotSignedException");
	else if (executor.getGrade() > 145)
		throw std::runtime_error("AForm::LowGradeToExecuteException");
	std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}
}
