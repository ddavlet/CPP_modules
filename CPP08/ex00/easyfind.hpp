#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	const char *what () const throw ()
	{
		return "No occurence found";
	};
};

template <typename T>
typename T::iterator easyfind(T &arr, int to_find)
{
	typename T::iterator value = std::find(arr.begin(), arr.end(), to_find);
	if (value != arr.end())
		return value;
	else
		throw NotFoundException();
}

#endif
