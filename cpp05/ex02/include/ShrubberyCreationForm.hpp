#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm() = delete;
		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&) = delete;
		~ShrubberyCreationForm() override = default;
		void execute(const Bureaucrat&) const override;
};

#endif