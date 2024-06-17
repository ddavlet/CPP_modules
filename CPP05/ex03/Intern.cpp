#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;33mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	AForm* form;

	std::string matches[4] = {"presidential request", "robotomy request", "shrubbery request"};
	for (i = 0; i < 4; i++)
	{
		if (matches[i] == name)
			break;
	}
	switch (i)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		std::cout << "Form with such name does not exists" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}
