#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat &assign);

		std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception {
            public:
			    virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
            public:
			    virtual const char* what() const throw();
		};

        void signForm(AForm& form);
		void up_grade(int val);
		void down_grade(int val);

        void executeForm(AForm const & form);
	private:
		const std::string _name;
		int _grade;
        Bureaucrat();
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif
