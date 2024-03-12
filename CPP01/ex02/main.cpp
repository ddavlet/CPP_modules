/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:53:06 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 16:04:05 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string	str = "HI THIS IS BRAIN";
	const char	*ptr = str.c_str();
	std::string& ref = str;

	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << std::endl;
	std::cout << str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
}
