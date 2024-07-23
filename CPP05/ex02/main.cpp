#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	Bureaucrat b1("Bureaucrat no 1", 3);
	Bureaucrat b2("Bureaucrat no 2", 150);
	//too low grade exception thrown
	try {Bureaucrat b2("Bureaucrat no 2", 151);}catch(const Bureaucrat::GradeTooLowException too_low){std::cout << too_low.what()<<std::endl;}
	PresidentialPardonForm ppf1("Home");
	RobotomyRequestForm rrf1("Home");
	ShrubberyCreationForm scf("Home");
	b1.up_grade(1);
	//execution without signing
	b1.executeForm(ppf1);
	b1.executeForm(rrf1);
	b1.executeForm(scf);
	//signing
	b1.signForm(ppf1);
	b1.signForm(rrf1);
	b1.signForm(scf);
	//too low grade to sign
	b2.signForm(rrf1);
	//successfull execution
	b1.executeForm(ppf1);
	b1.executeForm(rrf1);
	b1.executeForm(scf);
	//too low grade to execute
	b2.executeForm(rrf1);
	// try
	// {
	// 	Bureaucrat b2("Bureaucrat no 2", 100);
	// 	PresidentialPardonForm ppf1("Office");
	// 	RobotomyRequestForm rrf1("Office");
	// 	ShrubberyCreationForm scf1("Office");
	// 	try{ppf1.execute(b2);}catch(const std::exception& e){std::cerr << e.what() << "ppf1\n";}
	// 	try{rrf1.execute(b2);}catch(const std::exception& e){std::cerr << e.what() << "rrf1\n";}
	// 	try{scf1.execute(b2);}catch(const std::exception& e){std::cerr << e.what() << "scf1\n";}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return 0;
}
