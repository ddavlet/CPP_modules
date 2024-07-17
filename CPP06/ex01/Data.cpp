#include "Data.hpp"

// Constructors
Data::Data(): _data(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Data\e[0m" << std::endl;
}

Data::Data(const Data &copy)
{
	_data = copy.get_data();
	std::cout << "\e[0;33mCopy Constructor called of Data\e[0m" << std::endl;
}

Data::Data(std::string data)
{
	this->_data = data;
	std::cout << "\e[0;33mFields Constructor called of Data\e[0m" << std::endl;
}

// Destructor
Data::~Data()
{
	std::cout << "\e[0;31mDestructor called of Data\e[0m" << std::endl;
}

// Operators
Data & Data::operator=(const Data &assign)
{
	_data = assign.get_data();
	return *this;
}

// Getters / Setters
std::string Data::get_data() const
{
	return _data;
}
void Data::set_data(std::string data)
{
	this->_data = data;
}

