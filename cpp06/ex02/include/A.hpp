#pragma once

#include "Base.hpp"

class A : public Base {
	public:
		A();
		A(const A&) = delete;
		A& operator=(const A&) = delete;
		~A() override;
};