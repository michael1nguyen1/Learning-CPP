#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

//fix target 
int main(){
	Bureaucrat bob("bob", 1);
	RobotomyRequestForm a("karen");
	ShrubberyCreationForm b("lawn");
	PresidentialPardonForm c("pikachu");

	try{
		bob.signForm(a);
		a.execute(bob);
		std::cout << std::endl;
	}
	catch (const RobotomyRequestForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}

	try{
		bob.signForm(b);
		b.execute(bob);
		std::cout << std::endl;

	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e){
		std::cout << e.what() <<std::endl;
	}
	
	try{
		bob.signForm(c);
		c.execute(bob);

	}
	catch (const PresidentialPardonForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
}