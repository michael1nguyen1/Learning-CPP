#include "../include/Bureaucrat.hpp"

// Learned: returning ostream, exception classes
int main(){

std::cout << "####Test 1####\n" << std::endl;
	try{
		AForm b("Bob", 160, 0);
	}
	catch (const AForm::GradeTooHighException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e){
		std::cerr << "Exception caught! " <<e.what () <<std::endl;
	}

std::cout << "\n####Test 2####\n" << std::endl;
	try{
		Bureaucrat	bob("Bob", 60);
		AForm a;
		Bureaucrat	karen("Karen", 150);
		AForm b("Toilet Form", 100, 100);
		std::cout << a << std::endl;
		a.beSigned(bob);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		b.beSigned(karen);
		std::cout << b << std::endl;
		
	}
	catch (const AForm::GradeTooHighException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e){
		std::cerr << "Exception caught! " <<e.what () <<std::endl;
	}
}