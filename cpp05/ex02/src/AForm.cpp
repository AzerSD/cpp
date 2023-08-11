# include "AForm.hpp"
# include "Colors.hpp"

AForm::AForm(const std::string name, const int grade) : \
        _name(name), _grade(grade)
{

    try {
        if (grade < 1)
            throw std::runtime_error("AForm::GradeTooHighException");
        if (grade > 150)
            throw std::runtime_error("AForm::GradeTooHighException");
        _isSigned = false;
        std::cout << GREEN << "AForm " << name << " Default Constructor Called" << RST << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
}

AForm::AForm(AForm const &obj) : \
        _name(obj._name), _grade(obj._grade)
{
    this->_isSigned = obj._isSigned;
	std::cout << GREEN << "AForm Copy Constructor Called" << RST << std::endl;
}


AForm::~AForm() {
    std::cout << RED << "AForm " << this->_name << " Default Destructor Called" << RST << std::endl;
}


AForm &AForm::operator=(const AForm &obj) {
    std::cout << GREEN << "Copy Assignment Operator Called" << RST << std::endl;
    if (this != &obj) {
        _isSigned = obj._isSigned;
    }
    return (*this);
}


std::ostream &operator<<(std::ostream &out, const AForm &obj) {
    out << obj.getName() << ", AForm grade " << obj.getGrade() << \
        ", AForm status: " << obj.getIsSigned() << '.';
    return out;
}


std::string AForm::getName()     const { return this->_name; }
bool        AForm::getIsSigned() const { return this->_isSigned; }
int         AForm::getGrade()    const { return this->_grade; }

void        AForm::beSigned(Bureaucrat &buro) {
    try {
        if (this->_isSigned)
            throw std::runtime_error(buro.getName() + "::Already Signed " + this->getName());
        else if (this->_grade < buro.getGrade())
            throw std::runtime_error("AForm::GradeTooLowException");
        std::cout << buro.getName() << " signed " << this->getName() << std::endl;
        this->_isSigned = true;
    } catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
}
