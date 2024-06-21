#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default_taget")
{
	std::cout << "\e[0;30mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "\e[0;30mFields Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy)
{
	_target = copy.getTarget();
	std::cout << "\e[0;30mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;30mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& assign)
{
	_target = assign.getTarget();
	return (*this);
}

const std::string& PresidentialPardonForm::getTarget() const
{
	return _target;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    try {
	    if (isValid(executor))
	    	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Execution failed, error caught: " << e.what() << std::endl;
    }

}
