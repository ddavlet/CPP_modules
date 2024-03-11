#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
using namespace std;

class Contact
{
private:
	int	_index;
	string	_first_name;
	string	_last_name;
	string	_nickname;

	string	_getData(string data_name);
public:
	Contact();
	~Contact();
	void	init(void);
	void	display(int index);
};



#endif
