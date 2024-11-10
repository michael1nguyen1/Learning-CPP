#include "../include/Bureaucrat.hpp"


// Learned: returning ostream, exceptions classes
int main(){

	Bureaucrat a;

	std::cout << "\n*******Test1*******\n" << std::endl;
	try{
		Bureaucrat karen("karen", 151);
	}
	catch (const Bureaucrat::GradeTooHighException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e){
		std::cerr << "Exception caught! " <<e.what () <<std::endl;
	}
	std::cout << "Name of a is " << a.getName() << std::endl;
	std::cout << "Grade of a is " << a.getGrade() << std::endl;
	std::cout << "\n" << a << std::endl;

	std::cout << "\n*******Test2*******\n" << std::endl;	
	try {
		Bureaucrat bob("bob", 2);
		std::cout << "Bureaucrat is " << bob.getName() << std::endl;
		std::cout << "Grade of bob is " << bob.getGrade() << std::endl;
		bob.promote();
		std::cout << "Grade of bob after promototion is " << bob.getGrade() << std::endl;
		bob.promote();
	}
	catch (const Bureaucrat::GradeTooHighException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}

	std::cout << "\n*******Test3*******\n" << std::endl;
	try {
		Bureaucrat bob("bob", 149);
		std::cout << "Bureaucrat is " << bob.getName() << std::endl;
		std::cout << "Grade of bob is " << bob.getGrade() << std::endl;
		bob.demote();
		std::cout << "Grade of bob after demototion is " << bob.getGrade() << std::endl;
		bob.demote();
	}
	catch (const Bureaucrat::GradeTooHighException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	
}