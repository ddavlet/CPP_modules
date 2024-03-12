/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:11:01 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 13:06:51 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_index = 0;
}

Contact::~Contact()
{
}

void	Contact::init(int indx)
{
	this->_index = indx + 1;
	std::cout << "Please provide information for the new contact" << std::endl;
	_first_name = this->_getData("First name", 0);
	this->_last_name = this->_getData("Last name", 0);
	this->_nickname = this->_getData("Nickname", 0);
	this->_phoneNumber = this->_getData("Phone number", 1);
	this->_darkestSecret = this->_getData("Darkest secret", 2);
}

void	Contact::_displayData(std::string data)
{
	std::string truncatedData = data.substr(0, 10);
	if (data.length() > 10)
		truncatedData[9] = '.';
	std::cout << std::setw(10) << std::right << truncatedData << std::flush;
}

void	Contact::display(void)
{
	std::cout << std::right << this->_index << std::flush;
	std::cout << "|" << std::flush;
	this->_displayData(this->_first_name);
	std::cout << "|" << std::flush;
	this->_displayData(this->_last_name);
	std::cout << "|" << std::flush;
	this->_displayData(this->_nickname);
	std::cout << std::endl << std::endl;
}

bool	Contact::_checkData(std::string data, int type)
{
	if (data.empty())
		return false;
	for (size_t c = 0; c < data.length(); c++)
	{
		if (type == 0 && !(std::isalpha(data[c]) || data[c] == ' ' || data[c] == '-' || data[c] == '\''))
			return false;
		if (type == 1 && !(std::isdigit(data[c]) || data[c] == '+'))
			return false;
		if (type == 2 && !(std::isprint(data[c])))
			return false;
	}
	return true;
}

std::string	Contact::_getData(std::string text, int type)
{
	std::string	data;

	std::cin.clear();
	while (data.empty())
	{
		std::cout << text << ": " << std::flush;
		std::getline(std::cin, data);
		if (!_checkData(data, type) || !std::cin.good())
		{
			smooth_print("Invalid input, please try again");
			std::cin.clear();
			data = "";
		}
	}
	return (data);
}

void	Contact::displayFull()
{
	smooth_print("First name:");
	smooth_print(this->_first_name);
	smooth_print("Last name:");
	smooth_print(this->_last_name);
	smooth_print("Nickname:");
	smooth_print(this->_nickname);
	smooth_print("Phone number:");
	smooth_print(this->_phoneNumber);
	smooth_print("Darkest secret:");
	smooth_print(this->_darkestSecret);
}
bool	Contact::exists()
{
	if (this->_index > 0)
		return true;
	else
		return false;
}

void	Contact::smooth_print(std::string txt)
{
	for (int j = 0; txt[j]; j++)
	{
		std::cout << txt[j] << std::flush;
		usleep(10000);
	}
	std::cout << std::endl;
}
