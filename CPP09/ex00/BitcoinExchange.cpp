#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::append(std::string key, int value)
{
	std::pair<map::iterator, bool> ret;
	ret = data.insert(std::make_pair(key, value));
	if (ret.second == false)
	{
		std::cout << "Changing rate for " << ret.first->first << std::endl;
		data[key] = value;
	}
}

void BitcoinExchange::append(std::map<std::string, int> src)
{
	data.insert(src.begin(), src.end());
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src): data(src.data)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src)
		data = src.data;
	return *this;
}
