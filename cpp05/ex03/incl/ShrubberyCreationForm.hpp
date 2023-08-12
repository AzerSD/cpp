#ifndef __SHRUNNERYCREATIONFORM_HPP__
# define __SHRUNNERYCREATIONFORM_HPP__

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm();

		std::string	getTarget() const;

		virtual void execute(Bureaucrat const &executor) const;

};

#endif