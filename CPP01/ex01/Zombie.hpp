/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:05:52 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 15:14:35 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{

private:
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

};
