/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:38:45 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 16:34:06 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
public:
	Animal();
	Animal(const Animal& src);
	Animal& operator=(const Animal& src);
	virtual ~Animal();

	virtual void	makeSound() const = 0;
	virtual std::string	getType() const;

protected:
	std::string	type;

};
#endif
