#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {

	try {
		Intern intern;
		AForm *form;

		form = intern.makeForm("presidential request", "Bender");
		std::cout << *form << std::endl;
		form = intern.makeForm("None", "Bender");
		if (form)
			std::cout << *form << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	return 0;
}
