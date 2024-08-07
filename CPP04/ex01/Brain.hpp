/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:52:11 by ddavlety          #+#    #+#             */
/*   Updated: 2024/07/17 16:35:30 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain& src);
	~Brain();
	Brain& operator=(const Brain& src);

private:
	std::string	ideas[100];
};
#endif
