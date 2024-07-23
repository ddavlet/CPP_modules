#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default_taget")
{
	std::cout << "\e[0;34mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "\e[0;34mFields Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	_target = copy.getTarget();
	std::cout << "\e[0;34mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;34mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
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
	try {
	    isValid(executor);
        std::cout << "***drilling noises***" << std::endl;
		srand(static_cast<unsigned int>(time(0)));
		if (rand() % 2)
			std::cout << getTarget() << " is robotomized successfully" << std::endl;
		else
			std::cout << "robotomy failed" << std::endl;
    } catch (const std::exception& e) {
        throw ;
    }
}
