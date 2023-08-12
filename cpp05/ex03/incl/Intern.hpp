#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &cpy);
		Intern &operator=(Intern const &obj);
		~Intern();
	
		AForm* makeForm(std::string const &name, std::string const &target) const;

};

#endif