#include "MutantStack.hpp"
#include <list>
int main ()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.size() << std::endl;
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		std::cout << mstack.top() << std::endl;
		mstack.push(3); mstack.push(5); mstack.push(737);
		//[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack);
	}
	{
		MutantStack<int, std::vector<int> > mstack2;
		mstack2.push(5);
		mstack2.push(17);
		std::cout << mstack2.size() << std::endl;
		std::cout << mstack2.top() << std::endl;
		mstack2.pop();
		std::cout << mstack2.size() << std::endl;
		std::cout << mstack2.top() << std::endl;
		mstack2.push(3); mstack2.push(5); mstack2.push(737);
		//[...] mstack2.push(0);
		MutantStack<int, std::vector<int> >::iterator it2 = mstack2.begin();
		MutantStack<int, std::vector<int> >::iterator ite2 = mstack2.end();
		++it2;
		--it2;
		while (it2 != ite2) {
			std::cout << *it2 << std::endl;
		++it2; }
		std::stack<int, std::vector<int> > s2(mstack2);
	}
	{
		MutantStack<int, std::list<int> > mstack2;
		mstack2.push(5);
		mstack2.push(17);
		std::cout << mstack2.size() << std::endl;
		std::cout << mstack2.top() << std::endl;
		mstack2.pop();
		std::cout << mstack2.size() << std::endl;
		std::cout << mstack2.top() << std::endl;
		mstack2.push(3); mstack2.push(5); mstack2.push(737);
		//[...] mstack2.push(0);
		MutantStack<int, std::list<int> >::iterator it2 = mstack2.begin();
		MutantStack<int, std::list<int> >::iterator ite2 = mstack2.end();
		++it2;
		--it2;
		while (it2 != ite2) {
			std::cout << *it2 << std::endl;
		++it2; }
		std::stack<int, std::list<int> > s2(mstack2);
	}
		return 0;

}
