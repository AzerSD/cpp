
# include "Bureaucrat.hpp"
# include "Colors.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade){
    try {
        if (this->_grade < 1) {
            throw std::runtime_error("Bureaucrat::GradeTooHighException");
        } else if (this->_grade > 150) {
            throw std::runtime_error("Bureaucrat::GradeTooLowException");
        }
        std::cout << GREEN << "Bureaucrat " << name << " Default Constructor Called" << RST << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat() {
    std::cout << RED << "Bureaucrat " << this->_name << " Default Destructor Called" << RST << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name) {
    std::cout << GREEN << "Bureaucrat Copy Constructor Called" << RST << std::endl;
    this->_grade = cpy._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    std::cout << GREEN << "Copy Assignment Operator Called" << RST << std::endl;
    if (this != &obj) {
        this->_grade = obj._grade;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.';
    return out;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrBureau() {
    try {
        this->_grade -= 1;
        if (this->_grade < 1) {
            this->_grade += 1;
            throw std::runtime_error("Bureaucrat::GradeTooHighException");
        }
        std::cout << this->_name << ", grade incremented by 1" << std::endl; 
    }
    catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

}

void Bureaucrat::decrBureau() {
    try {
        this->_grade += 1;
        if (this->_grade > 150) {
            this->_grade -= 1;
            throw std::runtime_error("Bureaucrat::GradeTooLowException");
        }
        std::cout << this->_name << ", grade decremented by 1" << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
}

