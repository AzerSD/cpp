# include "Form.hpp"
# include "Colors.hpp"

Form::Form(const std::string name, const int grade) : \
        _name(name), _grade(grade)
{

    try {
        if (grade < 1)
            throw std::runtime_error("Form::GradeTooHighException");
        if (grade > 150)
            throw std::runtime_error("Form::GradeTooHighException");
        _isSigned = false;
        std::cout << GREEN << "Form " << name << " Default Constructor Called" << RST << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
}

Form::Form(Form const &obj) : \
        _name(obj._name), _grade(obj._grade)
{
    this->_isSigned = obj._isSigned;
	std::cout << GREEN << "Form Copy Constructor Called" << RST << std::endl;
}

Form::~Form() {
    std::cout << RED << "Form " << this->_name << " Default Destructor Called" << RST << std::endl;
}

Form &Form::operator=(const Form &obj) {
    std::cout << GREEN << "Copy Assignment Operator Called" << RST << std::endl;
    if (this != &obj) {
        _isSigned = obj._isSigned;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {
    out << obj.getName() << ", Form grade " << obj.getGrade() << \
        ", Form status: " << obj.getIsSigned() << '.';
    return out;
}


std::string Form::getName()     const { return this->_name; }
bool        Form::getIsSigned() const { return this->_isSigned; }
int         Form::getGrade()  const { return this->_grade; }

void        Form::beSigned(Bureaucrat &buro) {
    try {
        if (this->_isSigned)
            throw std::runtime_error(buro.getName() + "::Already Signed " + this->getName());
        else if (this->_grade < buro.getGrade())
            throw std::runtime_error("Form::GradeTooLowException");
        std::cout << buro.getName() << " signed " << this->getName() << std::endl;
        this->_isSigned = true;
    } catch (const std::exception &e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
}
