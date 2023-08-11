#ifndef __RABOTOMYREQUESTFORM_HPP__
# define __RABOTOMYREQUESTFORM_HPP__

# include "Colors.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &obj);
		~RobotomyRequestForm();

		std::string	getTarget() const;

		virtual void execute(Bureaucrat const &executor) const;

		static const int	requiredSignGrade = 72;
		static const int	requiredExecGrade = 45;
		class RobotomyException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif