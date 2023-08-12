#ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

# include <string>

class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& src);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter& rhs);

    static void convert(const std::string& input);

private:
    static void handleNumericInput(const std::string& input);
};

#endif
