#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
	std::cout << "\e[0;33mDefault Constructor called of Serializer\e[0m" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t poiter;

	poiter = reinterpret_cast<uintptr_t>(ptr);
	return poiter;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *data;

	data = reinterpret_cast<Data *>(raw);
	return data;
}
