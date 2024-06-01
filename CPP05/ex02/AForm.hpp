#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm();
		AForm(const AForm &copy);
		AForm(const std::string name, const int grade_to_sign, const int grade_to_exe);

		// Destructor
		virtual ~AForm();

		// Operators
		AForm & operator=(const AForm &assign);

		// Getters / Setters
		const std::string getName() const;
		bool	getSigned() const;
		int		getGrade_to_sign() const;
		int		getGrade_to_exe() const;

		// void	setGrade_to_sign();
		// void	setGrade_to_exe();

		// Exceptions
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		// Functions
		void beSigned(const Bureaucrat& b);
		bool isValid(const Bureaucrat& b) const;
		// pure virtual functions
		virtual void execute(const Bureaucrat& executor) const = 0;
	private:
		const std::string _name;
		bool _signed;
		const int _grade_to_sign;
		const int _grade_to_exe;
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object);

#endif
