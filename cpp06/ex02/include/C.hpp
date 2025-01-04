#pragma once

#include "Base.hpp"

class C : public Base {
	public:
		C();
		C(const C&) = delete;
		C& operator=(const C&) = delete;
		~C() override;
};