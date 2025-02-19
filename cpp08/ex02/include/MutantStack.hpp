#pragma once

#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::deque<T> {
public:
    using iterator = typename std::deque<T>::iterator;
    using const_iterator = typename std::deque<T>::const_iterator;

    MutantStack() = default;
    MutantStack(const MutantStack& other) : std::deque<T>(other) {}
    MutantStack& operator=(const MutantStack& other) {
        if (this != &other) {
            std::deque<T>::operator=(other);
        }
        return *this;
    }
    ~MutantStack() = default;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};