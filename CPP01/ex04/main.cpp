/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:58:27 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/13 12:30:43 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	change_line(std::string line, size_t pos, std::string *arg)
{
	size_t len;

	len = arg[0].length();
	line.erase(pos, len);
	line.insert(pos, arg[1]);
	return line;
}

std::string	read_file(std::string *str,const std::string& file_name)
{
	std::string line;
	std::string txt;
	size_t	pos;
	size_t	mv;

	std::ifstream file(file_name.c_str());
	if (!file.is_open()) {
		std::cout << "Error: file not found" << std::endl;
		exit (1);
	} else {
		while (std::getline(file, line)) {
			pos = line.find(str[0]);
			while (pos != std::string::npos)
			{
				line = change_line(line, pos, str);
				mv = pos + str[1].length();
				pos = line.find(str[0], mv);
			}
			txt.append(line + "\n");
		}
		file.close();
	}
	return (txt);
}

void	write_file(const std::string& txt,const std::string& file_name)
{
	std::ofstream file((file_name + ".replace").c_str());

	if (!file.is_open()) {
		std::cout << "Error: failed to open the file for writing" << std::endl;
		exit(1);
	} else {
		file << txt;
		std::cout << "New file " << file_name + ".replace " << "created" << std::endl;
	}
}
int main(int argc, char **argv)
{
	// std::string line;

	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	std::string	str[2];
	str[0] = std::string(argv[2]);
	str[1] =std::string(argv[3]);
	std::string	file_name(argv[1]);
	std::string txt = read_file(str, file_name);
	write_file(txt, file_name);

	return (0);
}
