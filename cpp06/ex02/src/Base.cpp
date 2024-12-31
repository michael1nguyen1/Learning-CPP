#include "Base.hpp"
#include <cstdlib>
#include <time.h>

Base::Base(){}

Base::~Base(){}

Base* Base::generate(void){
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

void Base::identify(Base* p){

}

void Base::identify(Base& p){

}