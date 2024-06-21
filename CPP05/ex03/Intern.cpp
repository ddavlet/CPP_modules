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

const char *Intern::WrongFormNameException::what() const {
    return "Wrong name of the form";
}

static AForm	*new_robotomy(std::string target)
{
	AForm	*robo = new RobotomyRequestForm(target);
	return (robo);
}

static AForm	*new_president(std::string target)
{
	AForm	*president = new PresidentialPardonForm(target);
	return (president);
}

static AForm	*new_shrubbery(std::string target)
{
	AForm	*shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	AForm* form;
    AForm* (*form_maker[3])(std::string) = {new_president, new_robotomy, new_shrubbery};
	std::string matches[3] = {"presidential request", "robotomy request", "shrubbery request"};
	for (i = 0; i < 4; i++)
	{
		if (matches[i] == name)
			form = form_maker[i](target);
	}
    if (form)
        return form;
    else
        throw WrongFormNameException();
}
