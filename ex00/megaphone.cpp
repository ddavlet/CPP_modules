#include <iostream>

int main(int argc, char *argv[])
{
	(void)argc;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (*(++argv))
		while (**argv)
		{
			if (**argv >= 'a' && **argv <= 'z')
				std::cout << (char)(**argv - 32);
			else
				std::cout << **argv;
			(*argv)++;
		}
	std::cout << "\n";
	return (0);
}
