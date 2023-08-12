#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : \
	AForm("RobotomyRequestForm", 45), _target(target)
{
	std::cout << GREEN << "RobotomyRequestForm " << target << " Default Constructor Called" << RST << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj)
{
	_target = obj._target;
	std::cout << GREEN << "RobotomyRequestForm Copy Constructor Called" << RST << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << "RobotomyRequestForm " << this->_target << " Default Destructor Called" << RST << std::endl;
}


std::string	RobotomyRequestForm::getTarget() const { return _target; }


RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & obj)
{
	if (this != &obj)
	{
		_target = obj._target;
		AForm::operator=(obj);
	}
	std::cout << GREEN << "RobotomyRequestForm Copy Assignment Operator Called" << RST << std::endl;
	return *this;
}


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try {
		int success;

		if (getIsSigned() == false)
			throw std::runtime_error("AForm::FormIsNotSignedException");
		else if (executor.getGrade() > 72)
			throw std::runtime_error("AForm::LowGradeToExecuteException");
		std::srand(time(NULL));
		success = std::rand() % 2;
		std::cout << " Some Drilling Noises " << std::endl;
		if (success == 1)
			std::cout << _target << " has been 50% robotomized" << std::endl;
		else
			throw std::runtime_error("RobotomyRequestForm::RobotomyException");
	} catch (const std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}
}
