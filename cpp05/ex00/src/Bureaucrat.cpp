#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &old) : name(old.name), grade(old.grade) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &old){
	if (this != &old)
	{
        this->name = old.name;
        if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		this->grade = old.grade;
	}
    return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const{
	return ("Grade too low it no lower than 150");
}

const char* Bureaucrat::GradeTooHighException::what() const{
	return ("Grade too high no higher than 1");
}

std::string Bureaucrat::getName(){
	return this->name;
}

int Bureaucrat::getGrade(){
	return this->grade;
}