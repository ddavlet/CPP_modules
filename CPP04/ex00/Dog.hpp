/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:46:56 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 22:55:59 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	~Dog();
	void	makeSound() const;
	std::string	getType() const;

private:

};
#endif
