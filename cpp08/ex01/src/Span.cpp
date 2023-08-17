
#include "Span.hpp"
#include <limits>
#include <iostream>
#include <stdexcept>

Span::Span(unsigned int n) : N(n) {}

Span::~Span() {}

Span::Span(const Span &src) {
    *this = src;
}

Span &Span::operator=(const Span &src) {
    if (this != &src) {
        N = src.N;
        numbers = src.numbers;
    }
    return *this;
}

void Span::addNumber(int value) {
    if (numbers.size() >= N)
        throw std::overflow_error("Span is full");
    numbers.push_back(value);
}

int Span::shortestSpan() {
    if (numbers.size() < 2)
        throw std::underflow_error("Not enough numbers for a span");
    
    std::sort(numbers.begin(), numbers.end());
    int minSpan = std::numeric_limits<int>::max();

    for (size_t i = 1; i < numbers.size(); i++) {
        minSpan = std::min(minSpan, numbers[i] - numbers[i-1]);
    }

    return minSpan;
}

int Span::longestSpan() {
    if (numbers.size() < 2)
        throw std::underflow_error("Not enough numbers for a span");

    int minElem = *std::min_element(numbers.begin(), numbers.end());
    int maxElem = *std::max_element(numbers.begin(), numbers.end());

    return maxElem - minElem;
}

template <typename InputIterator>
void Span::addRange(InputIterator first, InputIterator last) {
    while (first != last) {
        if (numbers.size() >= N)
            throw std::overflow_error("Span is full");
        numbers.push_back(*first);
        first++;
    }
}
