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
		throw IsFullException();
	arr.push_back(i);
	std::sort(arr.begin(), arr.end());
}

void Span::addBulk(unsigned int N)
{
	if (this->_max - this->arr.size() < N)
		throw IsFullException();
	srand(static_cast<unsigned int>(time(0)));
	for (unsigned int i = 0; i < N; ++i)
	{
		arr.push_back(rand() % INT32_MAX * ((rand() % 2) ? -1 : 1));
	}
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

const char *Span::IsFullException::what() const throw() {
	return "Container limit exeeded";
}

Span::~Span()
{
}
