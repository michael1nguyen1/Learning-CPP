#include "../include/Bureaucrat.hpp"

// Learned: returning ostream, exceptions classes
int main(){

	try{

		Form a;
		Form b("Bob", false, 160, 0);
		std::cout << a << std::endl;
	}
	catch (const Form::GradeTooHighException& e){
		std::cerr << "Exception caught! " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e){
		std::cerr << "Exception caught! " <<e.what () <<std::endl;
	}
}