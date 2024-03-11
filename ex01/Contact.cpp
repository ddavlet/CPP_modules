#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::init(void)
{
	_first_name = _getData("First name");
	_last_name = _getData("Last name");
	_nickname = _getData("Nickname");
	_index = 0;
}

void	Contact::display(int index)
{
	cout << index << " | " << _first_name << " | " << _last_name << " | " << _nickname << endl;
}

string	Contact::_getData(std::string data_name)
{
	string data;

	cout << data_name << ": ";
	cin >> data;
	return (data);
}
