#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	try {
		Bureaucrat b1("Bureaucrat no 1", 3);
		b1.getName();
		std::cout << b1 << std::endl;
		b1.down_grade(1);
		std::cout << b1 << std::endl;
		b1.up_grade(3);
		b1.up_grade(1);
		std::cout << b1 << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b2("Bureaucrat no 1", 0);
	} catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	try {
		Bureaucrat bob("Bob", 50);
		Bureaucrat alice("Alice", 1);

		Form formA("FormA", 25, 50);
		Form formB("FormB", 50, 100);

		std::cout << formA << std::endl;
		std::cout << formB << std::endl;

		bob.signForm(formA);
		alice.signForm(formA);

		std::cout << formA << std::endl;

		bob.signForm(formB);
		alice.signForm(formB);

		std::cout << formB << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
