#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//fix target 
int main(){
	Bureaucrat bob("bob", 1);
	RobotomyRequestForm a("karen");
	ShrubberyCreationForm b("lawn");

	try{
		bob.signForm(a);
		a.execute(bob);
		std::cout << "\n" << a << std::endl;
	}
	catch (const RobotomyRequestForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}

	try{
		bob.signForm(b);
		b.execute(bob);
		std::cout << "\n" << b << std::endl;
	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e){
		std::cout << e.what() <<std::endl;
	}
}