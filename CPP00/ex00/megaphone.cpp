#include <iostream>

int main(int argc, char *argv[])
{
	(void)argc;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::flush;
	while (*(++argv))
		while (**argv)
		{
			if (**argv >= 'a' && **argv <= 'z')
				std::cout << (char)(**argv - 32) << std::flush;
			else
				std::cout << **argv << std::flush;
			(*argv)++;
		}
	std::cout << std::endl;
	return (0);
}
