/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:41:19 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/01 22:28:01 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap& operator=(const ClapTrap& rhs);
	virtual ~ClapTrap();

	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string		getName() const;
	unsigned int	getHp() const;
	unsigned int	getEp() const;
	unsigned int	getAd() const;
protected:
	std::string		_Name;
	unsigned int	_Hp;
	unsigned int	_Ep;
	unsigned int	_Ad;
};
#endif
