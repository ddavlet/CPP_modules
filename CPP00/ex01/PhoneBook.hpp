/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:10:56 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/11 15:06:50 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	int		_index;
	Contact	_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	int		numberofContacts();
};


#endif
