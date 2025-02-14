#include <iostream>
#include <list>
#include "Array.hpp"

int	main() {
	try {
		size_t			i;
		Array<int>		intArray(5);
		Array<char>		charArray(3);

		for (i = 0; i < intArray.getLength(); i++)
			intArray[i] = i;
		for (i = 0; i < charArray.getLength(); i++)
			charArray[i] = i + 33;

		try {
			for (i = 0;; i++)
				std::cout << "intArray[" << i << "]: " << intArray[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
		try {
			for (i = 0;; i++)
				std::cout << "charArray[" << i << "]: " << charArray[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}

		Array<int>f(intArray); //copy
		try {
			for (i = 0;; i++)
				std::cout << "f[" << i << "]: " << f[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
		return 0;

	} catch (std::exception &e) {
		std::cout << "New failed: " << e.what() << "\n";
	}
	return 1;
}