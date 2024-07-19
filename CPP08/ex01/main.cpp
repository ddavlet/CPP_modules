#include "Span.hpp"

int main ()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// std::cout << *sp.arr.begin() << std::endl;
	// std::cout << *(sp.arr.end() - 1) << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	{
		Span sp2 = Span(10000);
		sp2.addBulk(10000);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		// for (int i = 0; i < 10000 ; ++i)
		// {
		// 	std::cout << sp2.arr[i] << std::endl;
		// }
	}
	return 0;
}
