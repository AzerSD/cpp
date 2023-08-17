#pragma once

// Span.hpp
#include <vector>
#include <algorithm>

class Span {
private:
    unsigned int N;
    std::vector<int> numbers;

public:
    Span(unsigned int n);
    ~Span();
    Span(const Span &src);
    Span &operator=(const Span &src);
    void addNumber(int value);
    int shortestSpan();
    int longestSpan();
    template <typename InputIterator>
    void addRange(InputIterator first, InputIterator last);
};
