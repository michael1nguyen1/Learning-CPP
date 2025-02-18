#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;  // Output top element (17)
    mstack.pop_back();  // Pop the top element (17)
    std::cout << mstack.size() << std::endl;  // Output size (1)
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

{
	std::list<int> list;
	
}