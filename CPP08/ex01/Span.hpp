#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdint.h>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);
		void addNumber(int);
		void addBulk(std::vector<int>::iterator begin,
			std::vector<int>::iterator end);
		long shortestSpan();
		long longestSpan();
		unsigned int		_max;
		std::vector<int>	arr;
	private:
};

#endif
