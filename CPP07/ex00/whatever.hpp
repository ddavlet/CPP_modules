#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap (T &a1, T &a2)
{
	T temp;

	temp = a1;
	a1 = a2;
	a2 = temp;
}

template <typename T>
T &min (T &a1, T &a2)
{
	return (a1 < a2) ? a1 : a2;
}

template <typename T>
T &max (T &a1, T &a2)
{
	return (a1 > a2) ? a1 : a2;
}

#endif
