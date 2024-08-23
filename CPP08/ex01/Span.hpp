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
		void addNumber(unsigned int);
		void addBulk(std::vector<unsigned int>::iterator begin,
			std::vector<unsigned int>::iterator end);
		long shortestSpan() const;
		long longestSpan() const;
		unsigned int		_max;
		std::vector<unsigned int>	arr;
	private:
};

#endif
