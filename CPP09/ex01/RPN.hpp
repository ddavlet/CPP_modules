#ifndef RPN_HPP
# define RPN_HPP

# include <queue>

class RPN: std::queue<int>
{
	typedef std::queue<int> Container;
	public:
		RPN();
		RPN(const RPN &src);
		RPN &operator=(const RPN &src);
		~RPN();
};

#endif
