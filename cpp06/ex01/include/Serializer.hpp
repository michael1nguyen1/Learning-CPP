#pragma once

#include <cstdint>
#include <string>

struct Data{
	int squidID;
	std::string name;
	
};


class Serializer{
	public:
		Serializer() = delete;
		Serializer(const Serializer&) = delete;
		Serializer& operator=(const Serializer&) = delete;
		~Serializer() = delete;

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};