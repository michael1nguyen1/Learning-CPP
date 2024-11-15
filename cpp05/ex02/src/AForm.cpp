#include "AForm.hpp"

AForm::AForm() : name("unknown"), gradeToSign(150), gradeToExec(100){}

AForm::AForm(std::string name, int gradeRe, int gradeEx) : name(name), gradeToSign(gradeRe), gradeToExec(gradeEx){
	if (gradeRe < 1 || gradeEx < 1){
        throw GradeTooHighException();
	}
    if (gradeRe > 150 || gradeEx > 150)
        throw GradeTooLowException();
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
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const noexcept{
    return "Grade to sign or execute form is too high";
}

const char* AForm::GradeTooLowException::what() const noexcept{
    return "Grade to sign or execute form is too low";
}