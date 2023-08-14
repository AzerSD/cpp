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

void ScalarConverter::convert(const std::string& input) {
    if (input.size() == 3 && input[0] == '\'' && input[2] == '\'' && std::isprint(input[1])) {
        char value = input[1];
        std::cout << "char: " << value << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(value) << std::endl;

    } else if (input.size() == 1 && std::isprint(input[0])) {
        // handle the case for a single character without single quotes
        char value = input[0];
        std::cout << "char: " << value << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
    } else {
        handleNumericInput(input);
    }
}

void ScalarConverter::handleNumericInput(const std::string& input) {
    std::istringstream iss(input);

    if (input == "inff" || input == "-inff" || input == "+inff")
    {
        float val = input == "-inff" ? -std::numeric_limits<float>::infinity() : std::numeric_limits<float>::infinity();
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << val << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(val) << std::endl;
    }
    else if (input == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(std::numeric_limits<float>::quiet_NaN()) << std::endl;
    }
    else if (input == "inf" || input == "-inf" || input == "+inf")
    {
        double val = input == "-inf" ? -std::numeric_limits<double>::infinity() : std::numeric_limits<double>::infinity();
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
        std::cout << "double: " << val << std::endl;
    }
    else if (input == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(std::numeric_limits<double>::quiet_NaN()) << "f" << std::endl;
        std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
    }
    else if (input.find("f") != std::string::npos)
    {
        float floatValue;
        std::string in = removeChar(input, 'f');
        std::istringstream iss(in);
        if (iss >> floatValue) {
            std::cout << "char: " << (isprint(static_cast<int>(floatValue)) ? std::string(1, static_cast<char>(floatValue)) : "Non displayable") << std::endl;
            std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
            std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
            std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
        }
    }
    else
    {
        double doubleValue;
        if (iss >> doubleValue) {
            std::cout << "char: " << (isprint(static_cast<int>(doubleValue)) ? std::string(1, static_cast<char>(doubleValue)) : "Non displayable") << std::endl;
            std::cout << "int: " << (doubleValue >= std::numeric_limits<int>::min() && doubleValue <= std::numeric_limits<int>::max() ? std::to_string(static_cast<int>(doubleValue)) : "impossible") << std::endl;
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(doubleValue) << "f" << std::endl;
            std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;

        } else {
            std::cout << "Cannot convert the input to a valid scalar type." << std::endl;
        }
    }
}

std::string ScalarConverter::removeChar(const std::string& s, char c) {
    std::string result;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] != c) {
            result += s[i];
        }
    }
    return result;
}
