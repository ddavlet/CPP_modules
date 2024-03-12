/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:10:49 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 13:17:33 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	if (_index == 8)
		_index = 0;
	this->_contacts[this->_index].init(this->_index);
	smooth_print("New contact added:\n\n");
	this->_contacts[this->_index].displayFull();
	std::cout << "__________________\n\n" << std::endl;
	this->_index++;
}

void	PhoneBook::list()
{
	if (!this->_index)
		smooth_print("There is no contact in phonebook yet");
	for (int i = 0; i < 8; i++)
		if (this->_contacts[i].exists())
			this->_contacts[i].display();
}

int		PhoneBook::numberofContacts() // ??
{
	return this->_index;
}

Contact	PhoneBook::find_contact(int indx)
{
	return (this->_contacts[indx - 1]);
}

void	PhoneBook::smooth_print(std::string txt)
{
	for (int j = 0; txt[j]; j++)
	{
		std::cout << txt[j] << std::flush;
		usleep(10000);
	}
}
