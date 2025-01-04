#include "Base.hpp"
#include  "A.hpp"
#include  "B.hpp"
#include  "C.hpp"

int main(){
	Base *derived = generate();
	A a;
    B b;
    C c;

    identify(a);
    identify(b);
    identify(c);
    identify(&a);
    identify(&b);
    identify(&c);

	identify(derived);
}