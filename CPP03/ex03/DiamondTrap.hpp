/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:33 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 09:58:45 by ddavlety         ###   ########.fr       */
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

		unsigned int	getHp() const;
		unsigned int	getEp() const;
		unsigned int	getAd() const;
		std::string		getName() const;

		using	ScavTrap::attack;
	protected:
		void	setHp(unsigned int Hp);
		void	setEp(unsigned int Ep);
		void	setAd(unsigned int Ad);
	private:
		std::string	_name;
};
#endif
