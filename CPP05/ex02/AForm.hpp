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
		AForm(const AForm &copy);
		AForm(const std::string name, const int grade_to_sign, const int grade_to_exe);

		// Destructor
		virtual ~AForm();

		// Operators

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
        class IsNotSignedException : public std::exception {
            public:
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
		AForm();
		AForm & operator=(const AForm &assign);
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object);

#endif
