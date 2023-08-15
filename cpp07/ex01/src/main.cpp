// main.cpp

#include <iostream>
#include "Iter.hpp"

template <typename T>
void print(const T &elem) {
    std::cout << elem << " ";
}

void square(int &elem) {
    elem *= elem;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string strArr[] = {"one", "two", "three"};

    std::cout << "Printing int array: ";
    iter(intArr, 5, print<int>);
    std::cout << std::endl;

    std::cout << "Printing double array: ";
    iter(doubleArr, 5, print<double>);
    std::cout << std::endl;

    std::cout << "Printing string array: ";
    iter(strArr, 3, print<std::string>);
    std::cout << std::endl;

    iter(intArr, 5, square);

    std::cout << "Printing squared int array: ";
    iter(intArr, 5, print<int>);
    std::cout << std::endl;

    return 0;
}
