#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	try {
		Bureaucrat b1("Bureaucrat no 1", 3);
		PresidentialPardonForm ppf1("Home");
		RobotomyRequestForm rrf1("Home");
		ShrubberyCreationForm scf1("Home");
        b1.signForm(ppf1);
		ppf1.execute(b1);
        b1.signForm(rrf1);
		rrf1.execute(b1);
        b1.signForm(scf1);
		scf1.execute(b1);
	} catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("Bureaucrat no 2", 100);
		PresidentialPardonForm ppf1("Office");
		RobotomyRequestForm rrf1("Office");
		ShrubberyCreationForm scf1("Office");
        b2.signForm(ppf1);
		ppf1.execute(b2);
        b2.signForm(rrf1);
		rrf1.execute(b2);
        b2.signForm(scf1);
		scf1.execute(b2);
		try{ppf1.execute(b2);}catch(const std::exception& e){std::cerr << e.what() << "ppf1\n";}
		try{rrf1.execute(b2);}catch(const std::exception& e){std::cerr << e.what() << "rrf1\n";}
		try{scf1.execute(b2);}catch(const std::exception& e){std::cerr << e.what() << "scf1\n";}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
