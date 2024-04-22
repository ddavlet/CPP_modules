/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:33 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 17:42:34 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap(std::string Name);
	~DiamondTrap();

	// void	attack(const std::string& target);
	void	whoAmI();
	using	ScavTrap::attack;

private:
	void	setHp(unsigned int Hp);
	void	setEp(unsigned int Ep);
	void	setAd(unsigned int Ad);
	std::string	_name;
};
#endif
