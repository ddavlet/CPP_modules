/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:00:06 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/05 13:03:31 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::string msg =
	"Dear Monday, can we talk about your attitude?"
	"You come too early, stay too long, and honestly, nobody likes you."
	"Sincerely, Everyone.";
	std::cout << msg << std::endl;
	std::cout << std::endl;
}
void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::string msg =
	"Dear Alarm Clock, I would appreciate it if you could find "
	"a less alarming way to wake me up in the morning. Maybe some "
	"gentle birdsong or a soft pillow massage? Just a thought. Thanks.";
	std::cout << msg << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::string msg =
	"Dear World, I'm writing to complain about the lack of 'undo' "
	"buttons in real life. Accidentally sent a text to the wrong person? "
	"No Ctrl+Z. Accidentally insulted your boss? No Edit > Undo. "
	"Seriously, we need to upgrade this simulation ASAP.";
	std::cout << msg << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::string msg =
	"To Whom It May Concern, I'd like to report a malfunction in the "
	"space-time continuum. It appears that weekends are accelerating at "
	"an alarming rate, while weekdays have inexplicably slowed to a crawl. "
	"Please investigate and restore temporal equilibrium ASAP, preferably before Monday arrives.";
	std::cout << msg << std::endl;
	std::cout << std::endl;
}

typedef void (Harl::*pf_type) (void);

void	Harl::complain(std::string	level)
{
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	pf_type types[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while (lvls[i] != level && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	(this->*(types[i]))();
}
