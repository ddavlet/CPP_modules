#include "PmergeMe.hpp"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container){
	for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << (int)*it << " ";
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::list<int> &container){
	for (std::list<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << (int)*it << " ";
	}
	return os;
}
