#include "Base.hpp"
#include  "A.hpp"
#include  "B.hpp"
#include  "C.hpp"

//learned dynamic_cast
int main(){
	A a;
    B b;
    C c;
	Base *derived = generate();

    identify(a);
    identify(b);
    identify(c);
    identify(&a);
    identify(&b);
    identify(&c);

	if (derived){
		identify(derived);
		delete derived;
	}
}