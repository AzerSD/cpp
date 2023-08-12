#include "ShrubberyCreationForm.hpp"
#include "Colors.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : \
	AForm("ShrubberyCreationForm", 145), _target(target + "_shrubbery")
{
	std::cout << GREEN << "ShrubberyCreationForm " << target << " Default Constructor Called" << RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj)
{
	_target = obj._target;
	std::cout << GREEN << "ShrubberyCreationForm Copy Constructor Called" << RST << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED << "ShrubberyCreationForm " << this->_target << " Default Destructor Called" << RST << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const { return _target; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
	{
		_target = obj._target;
		AForm::operator=(obj);
	}
	std::cout << GREEN << "ShrubberyCreationForm Copy Assignment Operator Called" << RST << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try {
		std::string	tree = 
		"               ,@@@@@@@,\n"
		"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		"       |o|        | |         | |\n"
		"       |.|        | |         | |\n"
		"jgs \\\\/ .\\_\\/\\_/__/  ,\\\\_//__\\\\/.  \\_//__/_\n";

		if (getIsSigned() == false)
			throw std::runtime_error("AForm::FormIsNotSignedException");
		else if (executor.getGrade() > 137)
			throw std::runtime_error("AForm::LowGradeToExecuteException");
		std::ofstream	outfile(_target.c_str());
		if (!outfile)
			throw std::runtime_error("Failed to open file");
		outfile << tree;
		std::cout << "ShrubberyCreationForm is executed successfully!" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}
}
