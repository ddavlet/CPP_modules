/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:11:03 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 14:16:16 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <unistd.h>

bool	check_index(std::string input, int contacts)
{
	int num;

	if (input.empty())
		return false;
	num = std::atoi(input.c_str());
	if (num > contacts || num < 1)
			return false;
	return true;
}

void	search_handler(PhoneBook phonebook)
{
	std::string	input;

	phonebook.list();
	std::cin.clear();
	while (input.empty())
	{
		std::getline(std::cin, input);
		if (!check_index(input, phonebook.numberofContacts()))
		{
			PhoneBook::smooth_print("Invalid input, please try again\n");
			std::cin.clear();
			input = "";
		}
		else if (std::atoi(input.c_str()) <= 8)
			phonebook.find_contact(std::atoi(input.c_str())).displayFull();
		else
		{
			PhoneBook::smooth_print("Invalid input, please try again\n");
			std::cin.clear();
			input = "";
		}
	}
}

int main ()
{
	PhoneBook phonebook;
	std::string	text[4];
	std::string	input;

	text[0] = "Welcome to the 80s and their unbelievable technology!\n\n";
	text[1] = "This is a crappy awesome phonebook software\n\n";
	text[2] = "\nYou can use ADD, SEARCH and EXIT commands.\n"
				"	ADD - add new contact to the phone book (max. 8 contacts)\n"
				"	SEARCH - search for a contact\n"
				"	EXIT - exit phonebook (!all contacts will be errased)\n";
	text[3] = "\n\nInvalid input, please try again\n\n";
	for (int i = 0; i < 2; i++)
		PhoneBook::smooth_print(text[i]);
	std::cin.clear();
	while (1)
	{
		PhoneBook::smooth_print(text[2]);
		std::getline(std::cin, input);
		if (!input.compare("ADD") || !input.compare("add"))
			phonebook.add();
		else if (!input.compare("SEARCH") || !input.compare("search"))
			search_handler(phonebook);
		else if (!input.compare("EXIT") || !input.compare("exit"))
			break ;
		else
			PhoneBook::smooth_print(text[3]);
		std::cin.clear();
		input = "";
	}
	return (0);
}
