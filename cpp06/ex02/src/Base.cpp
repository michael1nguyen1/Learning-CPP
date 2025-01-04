#include "Base.hpp"
#include  "A.hpp"
#include  "B.hpp"
#include  "C.hpp"
#include <cstdlib>
#include <time.h>
#include <iostream>

// Base::Base(){}

Base::~Base(){}

Base* generate(void){
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 3 + 1;
	switch (random){
		case 1:
			return new A();
		case 2:
			return new B();
		case 3:
			return new C();
		default:
			return nullptr;
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Generated A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Generated B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Generated C" << std::endl;
	else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p){
	if (dynamic_cast<A*>(&p))
		std::cout << "Generated A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Generated B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Generated C" << std::endl;
	else {
        std::cout << "Unknown type" << std::endl;
    }
}