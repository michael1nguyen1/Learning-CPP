#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat() = default;
		std::string getName() const;
		int getGrade() const;
		void promote();
		void demote();
		void signForm(Form&);
		friend std::ostream& operator<<(std::ostream&, const Bureaucrat&);

		class GradeTooHighException : public std::exception{
			public:
			const char *what() const noexcept override;
		};

		class GradeTooLowException : public std::exception{
			public:
			const char *what() const noexcept override;
		};
	private:
		std::string name;
		int grade;
};

#endif