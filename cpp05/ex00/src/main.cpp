
# include "Bureaucrat.hpp"

int main(void) {

    Bureaucrat b("buro", 1);
    std::cout << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    Bureaucrat a = b;
    std::cout << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;

    std::cout << std::endl;

    Bureaucrat c("cpyBuro", 10);
    c = b;
    std::cout << c.getName() << ", bureaucrat grade " << c.getGrade() << std::endl;
    c.incrBureau();
    std::cout << c.getName() << ", bureaucrat grade " << c.getGrade() << std::endl;

    std::cout << std::endl;

    Bureaucrat d("ddd", 150);
    std::cout << d << std::endl;
    d.incrBureau();
    std::cout << d.getName() << ", bureaucrat grade " << d.getGrade() << std::endl;
    d.decrBureau();
    d.decrBureau();
    std::cout << d.getName() << ", bureaucrat grade " << d.getGrade() << std::endl;
}
