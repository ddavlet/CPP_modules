#include "iter.hpp"
#include <iostream>

void change_name(std::string &str)
{
	str.replace(str.find('t', 0), 4, "new");
}

int main()
{
	std::string arr[3] = {"test1", "test2", "test3"};

	for (int i = 0;  i < 3; ++i)
		std::cout << arr[i] << std::endl;
	iter(arr, (size_t)3, change_name);
	for (int i = 0;  i < 3; ++i)
		std::cout << arr[i] << std::endl;
}
