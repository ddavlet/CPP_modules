#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("")
{
	_grade = 0;
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
	if (copy.getGrade() < 1)
		throw GradeTooLowException();
	if (copy.getGrade() > 150)
		throw GradeTooLowException();
	_grade = copy.getGrade();
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (assign.getGrade() < 1)
		throw GradeTooHighException();
	if (assign.getGrade() > 150)
		throw GradeTooLowException();
	_grade = assign.getGrade();
	return *this;
}


// Getters / Setters
std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}


// Exceptions
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too high grade exception";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too low grade exception";
}

void Bureaucrat::up_grade(int val)
{
	if (_grade - val < 1)
		throw GradeTooHighException();
	std::cout << "\e[0;30mUpgrade is called\e[0m" << std::endl;
	_grade -= val;
}

void Bureaucrat::down_grade(int val)
{
	if (_grade + val > 150)
		throw GradeTooLowException();
	std::cout << "\e[0;30mDowngrade is called\e[0m" << std::endl;
	_grade += val;
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout <<this->getName() << " couldn't sign " << form.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout <<  getName() << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Caught exeption :" << e.what() << std::endl;
	}
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << "Bureaucrat :" << object.getName() << std::endl;
	stream << ", Bureaucrat grade :" << object.getGrade() << std::endl;
	return stream;
}
