
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>

int main() {

    Bureaucrat john("John", 5);
    Bureaucrat alice("Alice", 2);

    Form form1("Test_111", 50);
    Form form2("Test_222", 1);
    
    std::cout << std::endl;

    john.signForm(form1);
    alice.signForm(form2);

    std::cout << std::endl;

    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;

    std::cout << std::endl;

    alice.signForm(form1);

    std::cout << std::endl;

    form1.beSigned(alice);
    form2.beSigned(john);

    return 0;
}
