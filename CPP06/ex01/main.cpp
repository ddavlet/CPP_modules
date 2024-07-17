#include "Serializer.hpp"

int main(void)
{
	Data data("some_data");
	Data *data2;
	uintptr_t ptr;

	ptr = Serializer::serialize(&data);
	data2 = Serializer::deserialize(ptr);
	std::cout << &data << std::endl;
	std::cout << (Data *)ptr << std::endl;
	std::cout << data2 << std::endl;
	return 0;
}
