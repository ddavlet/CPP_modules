#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main ()
{
	std::vector<int> vec;
	std::deque<int> deq;
	std::list<int> list;
	for (int i = 1; i < 6; ++i)
			vec.push_back(i);
	for (int i = 1; i < 6; ++i)
		deq.push_back(i);
	for (int i = 1; i < 6; ++i)
		list.push_back(i);
	try
	{
		for (int i = 1; i <= 6; ++i)
			std::cout << *easyfind<std::vector<int> >(vec, i) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		for (int i = 1; i <= 6; ++i)
			std::cout << *easyfind<std::list<int> >(list, i) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		for (int i = 1; i <= 6; ++i)
			std::cout << *easyfind<std::deque<int> >(deq, i) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
