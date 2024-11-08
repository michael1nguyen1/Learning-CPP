#include "Form.hpp"


Form::Form() : name("unknown"), sign(false), gradeToSign(150), gradeToExec(100){}

Form::Form(std::string name, bool sign, int gradeRe, int gradeEx) : name(name), sign(sign), gradeToSign(gradeRe), gradeToExec(gradeEx){
    if (gradeRe < 1 || gradeEx < 1)
        throw GradeTooHigheException();
    if (gradeRe > 150 || gradeEx > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &old) : name(old.name), sign(old.sign), gradeToSign(old.gradeToSign), gradeToExec(old.gradeToExec){}

std::string Form::getName()const {
    return this->name;
}

bool Form::getSign()const {
    return this->sign;
}

int Form::getGradeToSign()const {
    return this->gradeToSign;
}

int Form::getGradeToExec()const {
    return this->gradeToExec;
}

std::ostream& operator<<(std::ostream& os, const Form& current){
    os << "Form " << current.getName() << current.getSign() << " it is singed grade required to sign is "
    <<  current.getGradeToSign() << " grade to execute is " << current.getGradeToExec() << std::endl;
    return os;
}

void Form::beSigned(Bureaucrat& a){
    if (a.getGrade() <= this->getGradeToSign())
        this->sign = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHigheException::what() const noexcept{
    return "Grade to sign or execute form is too high";
}

const char* Form::GradeTooLowException::what() const noexcept{
    return "Grade to sign or execute form is too low";
}