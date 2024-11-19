#include "AForm.hpp"

AForm::AForm() : name("unknown"), target("unknown"), gradeToSign(150), gradeToExec(100){}

AForm::AForm(std::string name, std::string target, int gradeS, int gradeEx) : name(name), target(target), gradeToSign(gradeS), gradeToExec(gradeEx){
	if (gradeS < 1)
        throw GradeTooHighException("Grade to sign can't be 0 or negative");
	if (gradeEx < 1)
		throw GradeTooHighException("Grade to execute can't be 0 or negative");
	if (gradeS > 150)
    	throw GradeTooLowException("Grade to sign can't be more than 150");
	if (gradeEx > 150)
		throw GradeTooLowException("Grade to execute can't be more than 150");
}

AForm::AForm(AForm const &old) : name(old.name), target(old.target), sign(old.sign), gradeToSign(old.gradeToSign), gradeToExec(old.gradeToExec){}

std::string AForm::getName()const {
    return name;
}

bool AForm::getSign()const {
    return sign;
}

int AForm::getGradeToSign()const {
    return gradeToSign;
}

int AForm::getGradeToExec()const {
    return gradeToExec;
}

std::string AForm::getTarget() const{
	return target;
}

std::ostream& operator<<(std::ostream& os, const AForm& current){
	os << "Form " << current.getName() << " with target " << current.getTarget()
		<< " is " << (current.getSign() ? "signed" : "unsigned")
		<< ", grade to sign: " << current.getGradeToSign()
		<< ", grade to execute: " << current.getGradeToExec() << std::endl;
return os;

    return os;
}

void AForm::beSigned(Bureaucrat& a){
    if (a.getGrade() <= this->getGradeToSign())
        this->sign = true;
    else
        throw GradeTooLowException("Your grade is too low to sign this form!");
}

const char* AForm::GradeTooHighException::what() const noexcept{
    return message.c_str();
}

const char* AForm::GradeTooLowException::what() const noexcept{
    return message.c_str();
}