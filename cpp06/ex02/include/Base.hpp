#pragma once

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base{
	public:
		Base();
		Base(const Base&) = delete;
		Base& operator=(const Base&) = delete;
		virtual ~Base();

		Base* generate(void);
		void identify(Base* p);
		void identify(Base& p);
};