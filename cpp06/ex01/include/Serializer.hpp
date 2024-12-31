#pragma once

#include <cstdint>

struct Data{
	int blah;
};


class Serializer{
	Serializer() = delete;
	Serializer(const Serializer&) = delete;
	Serializer& operator=(const Serializer&) = delete;
	~Serializer() = delete;

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};