#include "Form.hpp"

// Constructors
Form::Form() : _name(""), _grade_to_exe(0), _grade_to_sign(0)
{
	_signed = false;
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}
Form::Form(const Form &copy) : _name(copy.getName()), _grade_to_exe(copy.getGrade_to_sign()), _grade_to_sign(copy.getGrade_to_exe())
{
	_signed = copy.getSigned();
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string name, bool sign, const int grade_to_sign, const int grade_to_exe) : _name(name), _grade_to_exe(grade_to_exe), _grade_to_sign(grade_to_sign)
{
	_signed = sign;
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	_signed = assign.getSigned();
	return *this;
}


// Getters / Setters
const std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

const int Form::getGrade_to_sign() const
{
	return _grade_to_sign;
}

const int Form::getGrade_to_exe() const
{
	return _grade_to_exe;
}

// Exceptions
const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream << "Form " << object.getName() << ": signed " << object.getSigned() << ", grade to sign " << object.getGrade_to_sign() << ", grade to execute " << object.getGrade_to_exe() << std::endl;
	return stream;
}
