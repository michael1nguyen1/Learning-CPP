#include "Form.hpp"

Form::Form() : name("unknown"), gradeToSign(150), gradeToExec(100){}

Form::Form(std::string name, int gradeRe, int gradeEx) : name(name), gradeToSign(gradeRe), gradeToExec(gradeEx){
	if (gradeRe < 1 || gradeEx < 1){
        throw GradeTooHighException();
	}
    if (gradeRe > 150 || gradeEx > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &old) : name(old.name), sign(old.sign), gradeToSign(old.gradeToSign), gradeToExec(old.gradeToExec){}

std::string Form::getName()const {
    return name;
}

bool Form::getSign()const {
    return sign;
}

int Form::getGradeToSign()const {
    return gradeToSign;
}

int Form::getGradeToExec()const {
    return gradeToExec;
}

std::ostream& operator<<(std::ostream& os, const Form& current){
	os << "Form " << current.getName()
		<< " is " << (current.getSign() ? "signed" : "unsigned")
		<< ", grade to sign: " << current.getGradeToSign()
		<< ", grade to execute: " << current.getGradeToExec() << std::endl;
	return os;
}

void Form::beSigned(Bureaucrat& a){
    if (a.getGrade() <= this->getGradeToSign())
        this->sign = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const noexcept{
    return "Grade to sign or execute form is too high";
}

const char* Form::GradeTooLowException::what() const noexcept{
    return "Grade to sign or execute form is too low";
}