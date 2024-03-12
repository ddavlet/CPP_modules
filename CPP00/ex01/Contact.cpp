/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:11:01 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/11 16:11:16 by ddavlety         ###   ########.fr       */
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
	this->_index = indx;
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
}

bool	Contact::_checkData(std::string data, int type)
{
	if (data.empty())
		return false;
	for (char c : data)
	{
		if (type == 0 && !(std::isalpha(c) || c == ' ' || c == '-' || c == '\''))
			return false;
		if (type == 1 && !(std::isdigit(c) || c == '+'))
			return false;
		if (type == 2 && !(std::isprint(c)))
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
			std::cout << "Invalid input, please try again" << std::endl;
			std::cin.clear();
			data = "";
		}
	}
	return (data);
}

void	Contact::displayFull()
{
	std::cout	<<"First name:" << std::endl;
	std::cout << this->_first_name << std::endl;
	std::cout	<<"Last name:" << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout	<<"Nickname:" << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout	<<"Phone number:" << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout	<<"Darkest secret:" << std::endl;
	std::cout << this->_darkestSecret << std::endl;
}
