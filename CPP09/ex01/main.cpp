#include "RPN.hpp"
#include <sstream>
#include <exception>

enum Operation
{
	ADD = '+',
	SUB = '-',
	DIV = '/',
	MUL = '*'
};

int add(int v1, int v2)
{
	return v1 + v2;
}

int substract(int v1, int v2)
{
	return v1 - v2;
}

int multiply(int v1, int v2)
{
	return v1 * v2;
}

int divide(int v1, int v2)
{
	return v1 / v2;
}

int calculate(RPN num, RPN oper)
{
	int result;
	int value;
	std::stringstream ss;

	int (*operation[4])(int, int) = {add, substract, multiply, divide};
	char operations[5] = "+-*/";
	ss << num.front();
	ss >> result;
	ss.clear();
	num.pop();
	while (!oper.empty())
	{
		for (int i = 0; i < 5; ++i)
		{
			if (operations[i] == oper.front())
			{
				ss << num.front();
				ss >> value;
				ss.clear();
				result = operation[i](result, value);
			}
		}
		num.pop();
		oper.pop();
	}
	if (!num.empty() || !oper.empty())
		throw 42;
	return result;
}

int main (int argc, char *argv[])
{
	RPN int_storage;
	RPN oper_storage;
	std::string equation;
	int values = -1;

	if (argc < 2)
	{
		std::cout << "Program requires input" << std::endl;
		return 0;
	}
	equation = argv[1];
	for (size_t i = 0; i < equation.size(); ++i)
	{
		if (equation[i] <= '9' && equation[i] >= 48)
		{
			if (values > 0)
			{
				std::cout << "RPN equasion is wrong" << std::endl;
				return 0;
			}
			int_storage.push(equation[i]);
			values++;
		}
		if (equation[i] == ADD || equation[i] == SUB || equation[i] == DIV || equation[i] == MUL)
		{
			if (values == 0)
			{
				std::cout << "RPN equasion is wrong" << std::endl;
				return 0;
			}
			oper_storage.push(equation[i]);
			values--;
		}
	}
	if (int_storage.size() == 1 && oper_storage.empty())
	{
		std::cout << int_storage.front() << std::endl;
		return 0;
	}
	if (int_storage.empty() || oper_storage.empty())
	{
		std::cout << "RPN equasion is wrong" << std::endl;
		return 0;
	}
	try {
		std::cout << calculate(int_storage, oper_storage) << std::endl;
	} catch (int error_code) {
		std::cout << "RPN equasion is wrong" << std::endl;
		return 0;
	}
}
