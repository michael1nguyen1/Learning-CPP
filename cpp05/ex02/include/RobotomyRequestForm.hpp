#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	public:
		RobotomyRequestForm() = delete;
		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&) = delete;
		~RobotomyRequestForm() override = default;
		void execute(const Bureaucrat&) override;
};
#endif