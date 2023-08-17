
#include <iostream>
#include "Span.hpp"

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl; // Expected: 2
    std::cout << sp.longestSpan() << std::endl;  // Expected: 14
    return 0;
}
