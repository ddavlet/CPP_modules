#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
		Intern intern;
		AForm *form;

		form = intern.makeForm("presidential request", "Bender");
		std::cout << *form << std::endl;
		try {
			Bureaucrat b1("Bureaucrat", 300);
			std::cout << *form << std::endl;
			form->execute(b1);
		} catch (const std::exception& e) {
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
		delete form;
		form = intern.makeForm("shrubbery request", "Bender's brother");
		try {
			Bureaucrat b2("Bureaucrat 2", 200);
			form->execute(b2);
		} catch (const std::exception& e) {
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
		std::cout << *form << std::endl;
		try {
			Bureaucrat b3("Bureaucrat3", 140);
			form->execute(b3);
		} catch (const std::exception& e) {
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
		delete form;
		form = intern.makeForm("None", "Bender");
		if (form)
			std::cout << *form << std::endl;
		delete form;
	return 0;
}
