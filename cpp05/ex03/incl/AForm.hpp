#ifndef __AFORM_HPP__
# define __AFORM_HPP__

# include <random>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string   _name;
        const int           _grade;
        bool                _isSigned;

    public:
        AForm(const std::string name, const int toGrade);
        virtual ~AForm( void );
        AForm(const AForm &cpy);

        AForm  &operator=(const AForm &obj);

        std::string getName() const ;
        bool         getIsSigned() const ;
        int         getGrade() const ;
        int         getToSign() const ;

        void        beSigned(Bureaucrat &buro);

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &obj);

#endif

