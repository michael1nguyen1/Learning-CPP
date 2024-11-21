#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//learned lamda functions
int main(){
	Intern someRandomIntern;
	AForm* rrf;
	AForm* s;
	AForm* blah;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	s = someRandomIntern.makeForm("shrubbery request", "Green");
	blah = someRandomIntern.makeForm("dance request", "doesn't matter");

	delete rrf;
	delete s;
	delete blah;
}