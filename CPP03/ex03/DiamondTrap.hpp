/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:33 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 11:57:46 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& src);
		DiamondTrap& operator=(const DiamondTrap& src);

		DiamondTrap(std::string Name);

		void	whoAmI();

		using	ScavTrap::attack;
		using	FragTrap::getHp;
		using	ScavTrap::getEp;
		using	FragTrap::getAd;
	protected:
		using	FragTrap::setHp;
		using	FragTrap::setEp;
		using	FragTrap::setAd;
	private:
		std::string	_Name;
};

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& fixed);

#endif
