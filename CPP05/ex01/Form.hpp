#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form(const Form &copy);
		Form(const std::string name, const int grade_to_sign, const int grade_to_exe);

		// Destructor
		~Form();

		// Operators
		Form & operator=(const Form &assign);

		// Getters / Setters
		const std::string getName() const;
		bool	getSigned() const;
		int		getGrade_to_sign() const;
		int		getGrade_to_exe() const;

		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
			    virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
            public:
			    virtual const char* what() const throw();
		};

		// Functions
		void	beSigned(const Bureaucrat& b);
	private:
		const std::string _name;
		const int _grade_to_sign;
		const int _grade_to_exe;
		bool _signed;
		Form();
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif
