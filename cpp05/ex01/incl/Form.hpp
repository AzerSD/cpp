#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string   _name;
        const int           _grade;
        bool                _isSigned;

    public:
        Form(const std::string name, const int toGrade);
        ~Form( void );
        Form(const Form &cpy);

        Form  &operator=(const Form &obj);

        std::string getName() const ;
        bool         getIsSigned() const ;
        int         getGrade() const ;
        int         getToSign() const ;

        void        beSigned(Bureaucrat &buro);
};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif

