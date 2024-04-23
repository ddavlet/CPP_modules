/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:45:31 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 20:53:57 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(const Character&);
		Character& operator=(const Character&);
		~Character() {}
		std::string const & getName() const;
		void equip(AMateria*);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
