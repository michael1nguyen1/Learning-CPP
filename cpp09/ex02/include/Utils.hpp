#pragma once

#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>

namespace Utils {
    template <typename Container>
    void print(const Container& container, std::string message) {
		std::cout << message;
        for (const auto& element : container) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}