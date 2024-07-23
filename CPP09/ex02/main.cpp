#include "PmergeMe.hpp"
#include <chrono>

int main(int argc, const char *argv[])
{
	std::vector<int> vector_container;
	std::deque<int> deque_container;

	if (argc < 2)
	{
		std::cout << "Need at least one argument for the program" << std::endl;
		return 0;
	}
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
	std::chrono::time_point<std::chrono::high_resolution_clock> finish;

	vector_container = build_container<std::vector<int> >(&argv[1]);
	std::cout << "Before: \n" << vector_container << std::endl;

}
