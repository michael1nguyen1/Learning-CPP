#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", target, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other){}

void RobotomyRequestForm::execute(const Bureaucrat& a){
	
	if (!getSign())
		throw GradeTooLowException("Form is not signed");
	if (a.getGrade() > this->getGradeToExec())
		throw GradeTooLowException("Grade is too low and no robot can be made");
	std::cout << "\nDrill Drill\n" << std::endl;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 100);

	int chance = dis(gen) % 2;
	if(chance)
		std::cout << "successfully turned into a robot" << std::endl;
	else
		std::cout << "failed good luck with your pathetic human life" << std::endl;
}
