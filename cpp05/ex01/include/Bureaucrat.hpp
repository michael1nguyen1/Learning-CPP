#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&) = delete;
		~Bureaucrat() = default;
		std::string getName() const;
		int getGrade() const;
		void promote();
		void demote();
		void signForm(Form&);

		class GradeTooHighException : public std::exception{
			public:
			const char *what() const noexcept override;
		};

		class GradeTooLowException : public std::exception{
			public:
			const char *what() const noexcept override;
		};
	private:
		const std::string name;
		int grade;
};

std::ostream&	operator<<(std::ostream&, const Bureaucrat&);

#endif