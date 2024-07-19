// #include "Array.hpp"
// #include <iostream>

// int main()
// {
// 	std::string str;
// 	Array<int> arr_int(5);
// 	Array<int> *arr_int_ptr = new Array<int>(5);
// 	Array<int> arr_int_cpy(*arr_int_ptr);
// 	Array<int> arr_int_new;

// 	for (unsigned int i = 0; i <= arr_int.size(); ++i)
// 	{
// 		try
// 		{
// 			std::cout << arr_int[i] << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << e.what() << '\n';
// 		}
// 	}
// 	delete arr_int_ptr;
// 	for (unsigned int i = 0; i <= arr_int_cpy.size(); ++i)
// 	{
// 		try
// 		{
// 			std::cout << arr_int_cpy[i] << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << e.what() << '\n';
// 		}
// 	}
// 	return 0;
// }

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	{
		std::string str;
		Array<int> arr_int(5);
		Array<int> *arr_int_ptr = new Array<int>(5);
		Array<int> arr_int_cpy(*arr_int_ptr);
		Array<int> arr_int_new;
		for (unsigned int i = 0; i <= arr_int.size(); ++i)
		{
			try
			{
				std::cout << arr_int[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		delete arr_int_ptr;
		for (unsigned int i = 0; i <= arr_int_cpy.size(); ++i)
		{
			try
			{
				std::cout << arr_int_cpy[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	try
    {
    	numbers[MAX_VAL - 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	for (unsigned int i = 0; i <= numbers.size(); ++i)
	{
		try
		{
			std::cout << numbers[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    delete [] mirror;//
    return 0;
}

