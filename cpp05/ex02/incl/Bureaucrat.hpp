#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        const std::string _name;
        int         _grade;
    
    public:
        Bureaucrat  (std::string const name, int grade);
        ~Bureaucrat ( void );
        Bureaucrat  (const Bureaucrat &cpy);
        Bureaucrat  &operator=(const Bureaucrat &obj);

        std::string getName() const ;
        int         getGrade() const ;
        void        incrBureau();
        void        decrBureau();

        void signForm(AForm &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif