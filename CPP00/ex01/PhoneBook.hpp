/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:10:56 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 12:56:07 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <unistd.h>

class PhoneBook
{
private:
	int		_index;
	Contact	_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	list();
	Contact	find_contact(int indx);
	int		numberofContacts();
	static void	smooth_print(std::string txt);
};


#endif
