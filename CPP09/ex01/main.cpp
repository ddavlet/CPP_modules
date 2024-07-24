#include "RPN.hpp"

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

	int (*operation[4])(int, int) = {add, substract, multiply, divide};
	char operations[5] = "+-*/";
	result = num.front();
	num.pop();
	while (!oper.empty())
	{
		for (int i = 0; i < 5; ++i)
		{
			if (operations[i] == oper.front())
				result = operation[i](result, num.front());
		}
		num.pop();
		oper.pop();
	}
	return result;
}

int main (int argc, char *argv[])
{
	RPN int_storage;
	RPN oper_storage;
	std::string equation;

	if (argc < 2)
	{
		std::cout << "Program requires input" << std::endl;
	}
	equation = argv[1];
	for (size_t i = 0; i < equation.size(); ++i)
	{
		if (equation[i] <= '9' && equation[i] >= 48)
			int_storage.push(equation[i]);
		if (equation[i] == ADD || equation[i] == SUB || equation[i] == DIV || equation[i] == MUL)
			oper_storage.push(equation[i]);
	}
	if (int_storage.empty() || oper_storage.empty())
		std::cout << "RPN equasion is wrong" << std::endl;

}
