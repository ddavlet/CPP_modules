#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <deque>
# include <stack>
# include <iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
private:

public:
	MutantStack(): std::stack<T, Container>(){
		std::cout << "default constructor called" << std::endl;
	};
	MutantStack(const MutantStack &src): std::stack<T, Container>(src){
		std::cout << "copy constructor called" << std::endl;
	};
	~MutantStack() {
		std::cout << "default destructor called" << std::endl;
	};
	const MutantStack &operator=(const MutantStack &src){
		if (this != & src)
			std::stack<T, Container>::operator=(src);
	};

	typedef typename Container::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif
