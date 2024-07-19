#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array() {
			T *arr = 0;
			this->arr = arr;
			this->_size = 0;
		};
		~Array() {
			delete[] this->arr;
		};
		Array(unsigned int i) {
			T *new_arr = new T[i]();
			this->arr = new_arr;
			this->_size = i;
		};
		Array(Array &src) {
			unsigned int src_size = src.size();
			T *arr = new T[src_size]();
			this->arr = arr;
			this->_size = src_size;
			for (unsigned int i = 0; i < src_size; ++i)
				this->arr[i] = src.arr[i];
		};
		Array		&operator=(Array &src)
		{
			if (this == &src)
				return *this;
			delete[] this->arr;
			unsigned int src_size = src.size();
			T *arr = new T[src_size];
			this->arr = arr;
			this->_size = src_size;
			for (unsigned int i = 0; i < src_size; ++i)
				this->arr[i] = src.arr[i];
			return *this;
		}
		unsigned int	size()
		{
			return this->_size;
		};
		T	&operator[](unsigned int index)
		{
			if (index >= this->size())
				throw SizeTooBigException();
			return (this->arr[index]);
		};
		class SizeTooBigException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Size is out of bound";
				}
		};
	private:
		T	*arr;
		unsigned int	_size;
};
#endif
