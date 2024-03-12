/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:10:59 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/11 14:39:13 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact
{
private:
	int	_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

	std::string	_getData(std::string text, int type);
	bool		_checkData(std::string data, int type);
	void		_displayData(std::string data);

public:
	Contact();
	~Contact();
	void	init(int indx);
	void	display(void);
	void	displayFull(void);
};



#endif
