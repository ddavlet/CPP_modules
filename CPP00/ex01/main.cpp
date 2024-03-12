/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:11:03 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/11 15:23:04 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <chrono>
#include <thread>
#include <stdexcept>
#include <string>

bool	check_index(std::string input, int contacts)
{
	int num;

	if (input.empty())
		return false;
	try {
		num = std::stoi(input);
		if (num > contacts || num < 1)
			return false;
	}
	catch (const std::exception& e) {
		throw ;
	}
	return true;
}

void	search_handler(PhoneBook phonebook)
{
	std::string	input;

	phonebook.search();
	std::cin.clear();
	while (input.empty())
	{
		try {
			std::getline(std::cin, input);
			if (!check_index(input, phonebook.numberofContacts()))
			{
				std::cout << "Invalid input, please try again" << std::endl;
				std::cin.clear();
				input = "";
			}
		}
		catch (const std::exception& e) {
			std::cerr << "Exeption: " << e.what() << std::endl;
			std::cout << "Error occurred\n Try again" << std::endl;
		}
	}
}

int main ()
{
	PhoneBook phonebook;
	std::string	text[3];
	std::string	input;

	text[0] = "Welcome to the 80s and their unbelievable technology!\n\n";
	text[1] = "This is a crappy awesome phonebook software\n\n";
	text[2] = "You can use ADD, SEARCH and EXIT commands.\n"
				"	ADD - add new contact to the phone book (max. 8 contacts)\n"
				"	SEARCH - search for a contact\n"
				"	EXIT - exit phonebook (!all contacts will be errased)\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; text[i][j]; j++)
		{
			std::cout << text[i][j] << std::flush;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
	}
	std::cin.clear();
	while (1)
	{
		std::getline(std::cin, input);
		if (input.compare("ADD") || input.compare("add"))
			phonebook.add();
		else if (input.compare("SEARCH") || input.compare("search"))
			search_handler(phonebook);
		else if (input.compare("EXIT") || input.compare("exit"))
			break ;
		else
		{
			std::cout << "Invalid input, please try again" << std::endl;
			std::cin.clear();
			input = "";
		}
	}
	return (0);
}
