#pragma once

#include "Base.hpp"

class B : public Base {
	public:
		B();
		B(const B&) = delete;
		B& operator=(const B&) = delete;
		~B() override;
};