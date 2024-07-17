#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(const Data &copy);
		Data(std::string _data);

		// Destructor
		~Data();

		// Operators
		Data & operator=(const Data &assign);

		// Getters / Setters
		std::string get_data() const;
		void set_data(std::string data);

	private:
		std::string _data;

};

#endif
