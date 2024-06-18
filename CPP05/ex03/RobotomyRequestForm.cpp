#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default_taget")
{
	std::cout << "\e[0;35mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "\e[0;35mFields Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	_target = copy.getTarget();
	std::cout << "\e[0;35mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;35mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& assign)
{
	_target = assign.getTarget();
	return (*this);
}

const std::string& RobotomyRequestForm::getTarget() const
{
	return _target;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (isValid(executor))
	{
		std::cout << "***drilling noises***" << std::endl;
		if (rand() % 2)
			std::cout << getTarget() << " is robotomized successfully" << std::endl;
		else
			std::cout << "robotomy failed" << std::endl;
	}
	else
		throw GradeTooLowException();

}
