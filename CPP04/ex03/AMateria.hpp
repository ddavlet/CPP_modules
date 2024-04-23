/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:42:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 20:58:07 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(const AMateria&);
		AMateria(std::string const &);
		AMateria& operator=(const AMateria&);
		std::string const& getType() const;
		virtual ~AMateria();
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter&) = 0;
};

#endif
