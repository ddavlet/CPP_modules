/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:58:38 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/13 12:47:15 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
public:
	Harl( void );
	~Harl( void );
	void	complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

