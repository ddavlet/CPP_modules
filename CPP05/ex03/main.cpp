#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {

	Bureaucrat b1("Bureaucrat no 1", 3);
	Intern office_boy;
	AForm* ppf1;
	AForm* rrf1;
	AForm* scf1;
	AForm* fail;
	try
	{
		ppf1 = office_boy.makeForm("presidential request", "Home");
		rrf1 = office_boy.makeForm("robotomy request", "Home");
		scf1 = office_boy.makeForm("shrubbery request", "Home");
		fail = office_boy.makeForm("wrong form", "Home");
	} catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	b1.signForm(*ppf1);
	b1.executeForm(*ppf1);
	b1.signForm(*rrf1);
	b1.executeForm(*rrf1);
	b1.signForm(*scf1);
	b1.executeForm(*scf1);
	return 0;
}
