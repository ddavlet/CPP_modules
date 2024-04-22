/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:46:56 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 23:32:01 by ddavlety         ###   ########.fr       */
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
	void	makeSound() const;
	std::string	getType() const;
	std::string	test() const;

private:
	Brain*	brain;
};
#endif
