#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	public:
		AForm();
		AForm(std::string, std::string, int, int);
		AForm(const AForm&);
		virtual ~AForm() = default;
		AForm& operator=(const AForm&) = delete;
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		std::string getTarget() const;
		void beSigned(Bureaucrat&);
		virtual void execute(Bureaucrat const&) const = 0;

		class GradeTooHighException : public std::exception{
			public:
				explicit GradeTooHighException(std::string str) : message(str){}
				const char *what()const noexcept override;
			private:
				std::string message;
		};
		class GradeTooLowException : public std::exception{
			public:
				explicit GradeTooLowException(std::string str) : message(str){}
				const char *what()const noexcept override;
			private:
				std::string message;
		};

	private:
		const std::string name;
		const std::string target;
		bool sign = false;
		const int gradeToSign;
		const int gradeToExec;
};
		
std::ostream&	operator<<(std::ostream&, const AForm&);
#endif
