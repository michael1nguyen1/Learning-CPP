#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unnamed"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &old) : name(old.name), grade(old.grade) {}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& current){
	os << current.getName() << " bureaucrat grade is " << current.getGrade() << std::endl;
	return os;
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept{
	return ("Grade too low: no lower than 150");
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept{
	return ("Grade too high: no higher than 1");
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::promote(){
    if (grade <= 1)
        throw GradeTooHighException();
    --grade;
}

void Bureaucrat::demote(){
    if (grade >= 150)
        throw GradeTooLowException();
    ++grade;
}
