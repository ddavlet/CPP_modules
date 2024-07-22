#include "Span.hpp"


Span::Span(): _max(0), arr(0)
{
}

Span::Span(unsigned int N): _max(N)
{
}

Span::Span(const Span &src): _max(src._max)
{
	this->arr = src.arr;
}

Span &Span::operator=(const Span &src)
{
	this->_max = src._max;
	this->arr = src.arr;
	return *this;
}

void Span::addNumber(int i)
{
	if (arr.size() == _max)
		throw std::out_of_range("Span is full");
	arr.push_back(i);
	std::sort(arr.begin(), arr.end());
}

void Span::addBulk(std::vector<int>::iterator begin,
			std::vector<int>::iterator end)
{
	if (std::distance(begin, end) > (long)this->_max - (long)this->arr.size())
		throw std::out_of_range("Not enough space in Span container");
	arr.insert(arr.end(), begin, end);
	std::sort(arr.begin(), arr.end());
}

long Span::shortestSpan()
{
	std::vector<int>::iterator next;
	std::vector<int>::iterator prev;
	int smallest_diff;

	prev = arr.begin();
	next = prev + 1;
	smallest_diff = *next - *prev;
	while (next != arr.end() - 1)
	{
		prev = next;
		next = prev + 1;
		if (*next - *prev < smallest_diff)
			smallest_diff = *next - *prev;
	}
	return smallest_diff;
}

long Span::longestSpan()
{
	return *(arr.end() -1) - *arr.begin();
}

Span::~Span()
{
}
