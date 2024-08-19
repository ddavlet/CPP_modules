#include "iter.hpp"
#include <iostream>

void change_name(std::string &str) {
	str.replace(str.find('t', 0), 4, "new");
}

void print_value(const int& value) {
	std::cout << value << std::endl;
}

int main()
{
	std::string arr[3] = {"test1", "test2", "test3"};

	for (int i = 0;  i < 3; ++i)
		std::cout << arr[i] << std::endl;
	iter(arr, (size_t)3, change_name);
	for (int i = 0;  i < 3; ++i)
		std::cout << arr[i] << std::endl;
	int integers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(integers, (size_t)10, print_value);
}
