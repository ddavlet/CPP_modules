/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:10:49 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/11 16:35:01 by ddavlety         ###   ########.fr       */
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
	this->_contacts[this->_index].init(this->_index);
	this->_index++;
}

void	PhoneBook::search()
{
	for (int i = 0; i < this->_index; i++)
		this->_contacts[i].display();
}

int		PhoneBook::numberofContacts()
{
	return this->_index;
}
