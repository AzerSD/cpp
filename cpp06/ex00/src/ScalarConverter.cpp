#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
    *this = src;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

std::string removeChar(const std::string& str, char c) {
    std::string result;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] != c) {
            result += str[i];
        }
    }
    return result;
}

void ScalarConverter::convert(const std::string& input) {
    std::istringstream iss(input);

    if (input.size() == 1 && std::isprint(input[0])) {
        char value = input[0];
        std::cout << "char: " << value << std::endl;
    } else {
        char c;
        if (iss >> c) {
            if (c == '-' || std::isdigit(c) || c == '+' || input == "nan") {
                handleNumericInput(input);
            } else {
                std::cout << "Cannot convert the input to a valid scalar type." << std::endl;
            }
        } else {
            std::cout << "Cannot convert the input to a valid scalar type." << std::endl;
        }
    }
}

void ScalarConverter::handleNumericInput(const std::string& input) {
    std::istringstream iss(input);

    if (input == "inff") {
        std::cout << "float: " << static_cast<float>(std::numeric_limits<float>::infinity()) << "f" << std::endl;
    } else if (input == "-inff") {
        std::cout << "float: " << static_cast<float>(-std::numeric_limits<float>::infinity()) << "f" << std::endl;
    } else if (input == "+inff") {
        std::cout << "float: " << static_cast<float>(std::numeric_limits<float>::infinity()) << "f" << std::endl;
    }else if (input == "nanf") {
        std::cout << "float: " << static_cast<float>(std::numeric_limits<float>::quiet_NaN()) << "f" << std::endl;
    } else if (input == "inf") {
        std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
    } else if (input == "-inf") {
        std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
    }  else if (input == "+inf") {
        std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
    } else if (input == "nan") {
        std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
    } else if (input.find("f") != std::string::npos) {
        float floatValue;
        std::string in = input;
        in = removeChar(in, 'f');
        std::istringstream iss(in);
        if (iss >> floatValue) {
            std::cout << "float: " << floatValue << "f" << std::endl;
        } else {
            std::cout << "Cannot convert the input to a valid scalar type." << std::endl;
        }
    } else if (input.find(".") != std::string::npos) {
        double doubleValue;
        if (iss >> doubleValue) {
            std::cout << "double: " << doubleValue << std::endl;
        } else {
            std::cout << "Cannot convert the input to a valid scalar type." << std::endl;
        }
    } else {
        long longValue;
        if (iss >> longValue) {
            if (longValue >= std::numeric_limits<int>::min() && longValue <= std::numeric_limits<int>::max()) {
                int intValue = static_cast<int>(longValue);
                std::cout << "int: " << intValue << std::endl;
            } else {
                std::cout << "Input value is outside the range of int." << std::endl;
            }
        } else {
            std::cout << "Cannot convert the input to a valid scalar type." << std::endl;
        }
    }
}
