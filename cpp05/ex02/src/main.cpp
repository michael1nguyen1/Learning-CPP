#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

//Learned true random, custom exceptions
int main(){
	Bureaucrat bob("bob", 1);
	RobotomyRequestForm a("karen");
	ShrubberyCreationForm b("lawn");
	PresidentialPardonForm c("pikachu");

	try{
		bob.signForm(a);
		bob.executeForm(a);
		std::cout << std::endl;
	}
	catch (const RobotomyRequestForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}

	try{
		bob.signForm(b);
		bob.executeForm(b);
		std::cout << std::endl;

	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e){
		std::cout << e.what() <<std::endl;
	}
	
	try{
		bob.signForm(c);
		bob.executeForm(c);

	}
	catch (const PresidentialPardonForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
}