#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
		~PresidentialPardonForm();

		std::string	getTarget() const;

		virtual void execute(Bureaucrat const &executor) const;
	
};

#endif