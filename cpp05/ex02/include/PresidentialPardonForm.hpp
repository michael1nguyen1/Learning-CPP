#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm() = delete;
		PresidentialPardonForm(const std::string&);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&) = delete; 
		~PresidentialPardonForm() = default;
		void execute(const Bureaucrat&) const override;
};

#endif