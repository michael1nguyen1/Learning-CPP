#include "AForm.hpp"

AForm::AForm() : name("unknown"), gradeToSign(150), gradeToExec(100){}

AForm::AForm(std::string name, int gradeS, int gradeEx) : name(name), gradeToSign(gradeS), gradeToExec(gradeEx){
	if (gradeS < 1)
        throw GradeTooHighException("Grade to sign can't be 0 or negative");
	if (gradeEx < 1)
		throw GradeTooHighException("Grade to execute can't be 0 or negative");
	if (gradeS > 150)
    	throw GradeTooLowException("Grade to sign can't be more than 150");
	if (gradeEx > 150)
		throw GradeTooLowException("Grade to execute can't be more than 150");
}

AForm::AForm(AForm const &old) : name(old.name), sign(old.sign), gradeToSign(old.gradeToSign), gradeToExec(old.gradeToExec){}

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

std::ostream& operator<<(std::ostream& os, const AForm& current){
	std::string	str;

	if (current.getSign())
	{
		str = "signed";
		os << "Form " << current.getName() << " signature is " << str << " its grade to Sign is "
		<< current.getGradeToSign() << " grade to Execute is " << current.getGradeToExec() << std::endl;
	}
	else
	{
		str = "unsigned";
		os << "Form " << current.getName() << " signature is " << str << " its grade to Sign is "
		<< current.getGradeToSign() << " grade to Execute is " << current.getGradeToExec() << std::endl;
	}
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