#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubForm", target, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other){}

void ShrubberyCreationForm::execute(const Bureaucrat &bob){
	if (!getSign())
		throw GradeTooLowException("Form is not signed");
	if (bob.getGrade() > this->getGradeToExec())
		throw GradeTooLowException("Grade is too low and no robot can be made");
	std::ofstream file(getTarget() + "_shrubbery");
	if(!file){
		std::cout << "\nfile failed to be created" << std::endl;
		return ;
	}
	file << "  *  \n *** \n*****\n  *" <<std::endl;
	if (file.fail())
		std::cerr << "Error writing to the file!" << std::endl;
	else {
    	std::cout << "\nShrubForm executed file created" << std::endl;
}
}