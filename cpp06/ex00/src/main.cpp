# include "ScalarConverter.hpp"
# include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./convert <scalar_value>" << std::endl;
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}