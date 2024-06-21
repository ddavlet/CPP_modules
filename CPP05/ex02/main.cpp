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
		ShrubberyCreationForm scf("Home");
        b1.up_grade(1);

		ppf1.execute(b1);
		rrf1.execute(b1);
		scf.execute(b1);
	} catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("Bureaucrat no 2", 100);
		PresidentialPardonForm ppf1("Office");
		RobotomyRequestForm rrf1("Office");
		ShrubberyCreationForm scf1("Office");
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
