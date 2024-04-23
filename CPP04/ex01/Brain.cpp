/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:54:09 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 16:03:31 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is constructed" << std::endl;
}
Brain::~Brain() {
	std::cout << "Brain is destructed" << std::endl;
}

Brain::Brain(const Brain& src) {
	std::copy(src.ideas, src.ideas + 100, ideas);
}

Brain&	Brain::operator=(const Brain& src) {
	if (this != &src)
		std::copy(src.ideas, src.ideas + 100, ideas);
	return *this;
}

// std::string	Brain::first_idea() {
// 	ideas[0] = "first_idea";
// 	return ideas[0];
// }
