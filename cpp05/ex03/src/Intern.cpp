#include "Intern.hpp"

Intern::Intern(const Intern&){}

Intern& Intern::operator=(const Intern &other){
	if(this != &other){
	}
	return *this;
}

AForm* Intern::makeForm(const std::string &formName, const std::string &formTarget) {
	std::string formNames[] = {"shrubbery request", "robotomy request", "presidential pardon"};
  	AForm* (*createFunctions[])(const std::string&) = {
    [](const std::string& target) -> AForm* { return new ShrubberyCreationForm(target); },
    [](const std::string& target) -> AForm* { return new RobotomyRequestForm(target); },
    [](const std::string& target) -> AForm* { return new PresidentialPardonForm(target); }
	};
    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]){
			std::cout << "Intern created " << formName << " for target " << formTarget
					  << std::endl;
			return createFunctions[i](formTarget);
		}
    }
	std::cout << "Error such form can be created" << std::endl;
    return nullptr;
}
