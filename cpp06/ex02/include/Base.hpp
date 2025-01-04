#pragma once

class Base{
	public:
		Base();
		Base(const Base&) = delete;
		Base& operator=(const Base&) = delete;
		virtual ~Base();

		void identify(Base* p);
		void identify(Base& p);
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);