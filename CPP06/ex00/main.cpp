#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	std::string input;
	input = argv[1];
	ScalarConverter::convert(input);
	return (0);
}
