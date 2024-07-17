#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
}


// Destructor
ScalarConverter::~ScalarConverter()
{
}


// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}

void ScalarConverter::convert(std::string input)
{
	if (input.empty())
		return ;
	int type = ScalarConverter::find_type(input);
	print_char(type, input);
	print_int(type, input);
	print_float(type, input);
	print_double(type, input);

}

void ScalarConverter::print_char(int type, std::string input)
{
	std::cout << "char: ";
	if (type <= 2)
	{
		int input_int;
		std::istringstream iss(input);
		iss >> input_int;
		if (input_int >= 32 && input_int <= 126)
			std::cout << "'" << static_cast<char>(input_int) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else if (type == 6)
		std::cout << "'" << input[0] << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::print_int(int type, std::string input)
{
	std::cout << "int: ";
	if (type <= 2)
	{
		int input_int;
		std::istringstream iss(input);
		iss >> input_int;
		std::cout << input_int << std::endl;
	}
	else if (type == 6)
		std::cout << static_cast<int>(input.c_str()[0]) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::print_float(int type, std::string input)
{
	std::cout << "float: ";
	if (type <= 2)
	{
		float input_float;
		std::istringstream iss(input);
		iss >> input_float;
		std::cout << input_float;
		if (type != 2)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	else if (type == 3)
		std::cout << "nanf" << std::endl;
	else if (type == 4)
		std::cout << "-inff" << std::endl;
	else if (type == 5)
		std::cout << "+inff" << std::endl;
	else if (type == 6)
		std::cout << static_cast<float>(input.c_str()[0]) << ".0f" << std::endl;
}

void ScalarConverter::print_double(int type, std::string input)
{
	std::cout << "double: ";
	if (type <= 2)
	{
		double input_float;
		std::istringstream iss(input);
		iss >> input_float;
		std::cout << input_float;
		if (type != 2)
			std::cout << ".0";
		std::cout << std::endl;
	}
	else if (type == 3)
		std::cout << "nan" << std::endl;
	else if (type == 4)
		std::cout << "-inf" << std::endl;
	else if (type == 5)
		std::cout << "+inf" << std::endl;
	else if (type == 6)
		std::cout << static_cast<double>(input.c_str()[0]) << ".0" << std::endl;
}

int ScalarConverter::find_type(std::string input)
{
	char c;


	if (input == "nan" || input == "nanf")
		return 3;
	if (input == "-inf" || input == "-inff")
		return 4;
	if (input == "+inf" || input == "+inff")
		return 5;
	c = input.c_str()[0];
	if (c < 48 || c > 57)
		return 6;
	if (input.find('.') <= input.length())
		return 2;
	return 0;
}
