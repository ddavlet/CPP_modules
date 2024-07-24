#include "RPN.hpp"

RPN::RPN(): std::queue<char>()
{
}

RPN::RPN(const RPN &src): std::queue<char>(src)
{
}

RPN &RPN::operator=(const RPN &src)
{
	if (this != &src)
		std::queue<char>::operator=(src);
	return *this;
}

RPN::~RPN()
{
}
