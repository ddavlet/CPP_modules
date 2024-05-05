/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:53:06 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/04 17:43:49 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string	str = "HI THIS IS BRAIN";
	const char	*ptr = str.c_str();
	std::string& ref = str;
	std::string	new_str = str;

	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << std::endl;
	std::cout << str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << std::endl;
	std::cout << &new_str << std::endl;
}
