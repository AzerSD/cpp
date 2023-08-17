#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    using std::stack<T>::c;
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return c.begin(); }
    const_iterator begin() const { return c.begin(); }
    iterator end() { return c.end(); }
    const_iterator end() const { return c.end(); }

};
