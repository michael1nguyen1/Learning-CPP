#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main(){
	{

		MutantStack<int> newstack;
		MutantStack mstack(newstack);
		newstack = mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
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

		std::cout<< "\n";

		const MutantStack mstack2 = mstack;
		MutantStack<int>::const_iterator cit = mstack.begin();
		MutantStack<int>::const_iterator cite = mstack.end();
		++cit;
		--cit;
		while (cit != cite)
		{
			std::cout << *cit << std::endl;
			++cit;
		}
	}

	{
		std::cout<< "\n";

		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
		return 0;
	}
}