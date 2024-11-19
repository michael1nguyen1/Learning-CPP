#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentForm", target, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {}

void PresidentialPardonForm::execute(const Bureaucrat &a){
	if (!getSign())
		throw GradeTooLowException("Form is not signed");
	if (a.getGrade() > this->getGradeToExec())
		throw GradeTooLowException("Grade is too low and no pardons given");
	std::cout << "\nDear " << getTarget() << ", you have been pardoned by Zaphod Beeblerox" << std::endl; 
}