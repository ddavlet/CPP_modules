#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T>
void iter(T *arr, size_t length, void (*func)(T &))
{
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

template <typename T>
void iter(T *arr, size_t length, void (*func)(const T &))
{
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

template <typename T>
void iter(const T *arr, size_t length, void (*func)(const T &))
{
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}


#endif
