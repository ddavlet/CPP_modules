#include "PmergeMe.hpp"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container)
{
	for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << std::endl;
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::deque<int> &container)
{
	for (std::deque<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << std::endl;
	}
	return os;
}
