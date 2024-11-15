#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 145, 137){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other){}

void RobotomyRequestForm::execute(const Bureaucrat& blah){
	if (blah.getGrade() > this->getGradeToSign() || !this->getSign())
		throw GradeTooLowException();
	std::cout << "drill drill\n" << std::endl;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 100);

	int chance = dis(gen) % 2;
	if(chance)
		std::cout << "successfully turned into a robot" << std::endl;
	else
		std::cout << "failed sorry" << std::endl;
}
