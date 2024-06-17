/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:04:32 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/04 11:00:41 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap& src);
	FragTrap& operator=(const FragTrap& src);
	FragTrap(std::string Name);

	void	highFivesGuys(void);
private:


};
#endif
