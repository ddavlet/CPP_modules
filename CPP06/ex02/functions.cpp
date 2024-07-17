#include "functions.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return 0;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class C" << std::endl;
	else
		std::cout << "Not Class A, B or C" << std::endl;
}

void identify(Base& p)
{
	Base tmp;

	try {
		tmp = dynamic_cast<A &>(p);
		(void) tmp;
		std::cout << "Class A" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		tmp = dynamic_cast<B &>(p);
		(void) tmp;
		std::cout << "Class B" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		tmp = dynamic_cast<C &>(p);
		(void) tmp;
		std::cout << "Class C" << std::endl;
	} catch (std::exception &e) {
	}
}
