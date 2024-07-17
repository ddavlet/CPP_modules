#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>

class ScalarConverter
{
	public:
		static void convert(std::string);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter & operator=(const ScalarConverter &assign);
		static int find_type(std::string);
		static void print_char(int, std::string);
		static void print_int(int, std::string);
		static void print_float(int, std::string);
		static void print_double(int, std::string);

};

#endif
