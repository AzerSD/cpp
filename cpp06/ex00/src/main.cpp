# include "ScalarConverter.hpp"

int main() {
    ScalarConverter::convert("c");
    ScalarConverter::convert("42");
    ScalarConverter::convert("4.2f");
    ScalarConverter::convert("4.2");
    ScalarConverter::convert("-4.2");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("+inf");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("nan");

    ScalarConverter::convert("nand");

    return 0;
}
