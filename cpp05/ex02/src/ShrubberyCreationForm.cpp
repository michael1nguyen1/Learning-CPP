#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other){}

void ShrubberyCreationForm::execute(const Bureaucrat &bob){
	if (!getSign())
		throw GradeTooLowException("Form is not signed");
	if (bob.getGrade() > this->getGradeToExec())
		throw GradeTooLowException("Grade is too low and no robot can be made");
	std::ofstream file(getName() + "_shrubbery");
	if(!file){
		std::cout << "file failed to be created" << std::endl;
		return ;
	}
	file << "  *  \n *** \n*****\n  *  \n  *  " <<std::endl;
}