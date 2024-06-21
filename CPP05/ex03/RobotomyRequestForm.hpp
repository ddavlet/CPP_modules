/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:36:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/30 14:51:47 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <stdlib.h>

class RobotomyRequestForm: public AForm
{
	public:
		//constuct/destruct
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
		RobotomyRequestForm(const std::string& target);

		// getters/setters
		const std::string& getTarget() const;

		// inherited function
		void execute(const Bureaucrat& executor) const;
	private:
		std::string	_target;
};

#endif
