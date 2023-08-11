#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & inputTarget);
		PresidentialPardonForm(PresidentialPardonForm const & rhs);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm();

		std::string	getTarget() const;

		virtual void execute(Bureaucrat const & executor) const;

		static const int	requiredSignGrade = 25;
		static const int	requiredExecGrade = 5;
};

#endif