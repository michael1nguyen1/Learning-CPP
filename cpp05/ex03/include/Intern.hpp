#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	public:
		Intern() = default;
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		~Intern() = default;
		AForm *makeForm(const std::string&, const std::string&);
};

#endif