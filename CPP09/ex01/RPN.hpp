#ifndef RPN_HPP
# define RPN_HPP

# include <queue>
# include <iostream>

class RPN: public std::queue<char>
{
	typedef std::queue<char> Container;
	public:
		RPN();
		RPN(const RPN &src);
		RPN &operator=(const RPN &src);
		~RPN();

		// void push(char value);
};

#endif
