#include "AForm.hpp"

// Constructors
AForm::AForm() : _name(""), _grade_to_sign(0), _grade_to_exe(0)
{
	_signed = false;
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}
AForm::AForm(const AForm &copy) : _name(copy.getName()),  _grade_to_sign(copy.getGrade_to_exe()), _grade_to_exe(copy.getGrade_to_sign())
{
	_signed = copy.getSigned();
	std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_exe) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exe(grade_to_exe)
{
	_signed = false;
	std::cout << "\e[0;33mFields Constructor called of AForm\e[0m" << std::endl;
}


// Destructor
AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	_signed = assign.getSigned();
	return *this;
}


// Getters / Setters
const std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGrade_to_sign() const
{
	return _grade_to_sign;
}

int AForm::getGrade_to_exe() const
{
	return _grade_to_exe;
}

// Exceptions
const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= _grade_to_sign && b.getGrade() <= _grade_to_exe)
		_signed = true;
	else
		throw GradeTooLowException();
}

bool AForm::isValid(const Bureaucrat& b) const
{
	if (b.getGrade() <= _grade_to_sign && b.getGrade() <= _grade_to_exe)
		return true;
	else
		return false;
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object)
{
	stream << "AForm :" << object.getName() << std::endl;
	stream << "signed :" << object.getSigned() << std::endl;
	stream << "Grade to sign :" << object.getGrade_to_sign() << std::endl;
	stream << "Grade to execute :" << object.getGrade_to_exe() << std::endl;
	return stream;
}
