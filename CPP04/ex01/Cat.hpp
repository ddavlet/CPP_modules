/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:46:56 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/18 21:08:29 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	~Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);
	void	makeSound() const;

private:
	Brain*	brain;
};
#endif
