#include "functions.hpp"

int main(void)
{
	Base *base[10];

	for (int i = 0; i < 10; i++)
	{
		base[i] = generate();
		identify(base[i]);
		identify(*base[i]);
		delete base[i];
	}
}
