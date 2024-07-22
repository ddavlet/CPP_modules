#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>

class BitcoinExchange
{
	typedef typename std::map<std::string, int> map;
	private:
		map data;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange& src);
		~BitcoinExchange();

		void append(std::string key, int value);
		void append(std::map<std::string, int>);
};


#endif
