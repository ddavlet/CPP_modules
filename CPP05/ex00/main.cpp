#include "Bureaucrat.hpp"

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
	// try {
	// } catch (const std::exception& e) {
	// 	std::cerr << "Caught exception: " << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat b1("Bureaucrat no 1", 3);
	// } catch (const std::exception& e) {
	// 	std::cerr << "Caught exception: " << e.what() << std::endl;
	// }

	return 0;
}
