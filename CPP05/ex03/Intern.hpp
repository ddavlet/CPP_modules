#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);

		// Destructor
		~Intern();

		// Operators
		Intern & operator=(const Intern &assign);

		// Functions
		AForm* makeForm(std::string name, std::string target);

	private:

};

#endif
