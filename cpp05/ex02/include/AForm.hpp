#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	public:
		AForm();
		AForm(std::string, int, int);
		AForm(const AForm&);
		virtual ~AForm() = default;
		AForm& operator=(const AForm&) = delete;
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat&);
		virtual void execute(Bureaucrat const&) = 0;

		class GradeTooHighException : public std::exception{
			public:
				const char *what()const noexcept override;
		};
		class GradeTooLowException : public std::exception{
			public:
				const char *what()const noexcept override;
		};

	private:
		const std::string name;
		bool sign = false;
		const int gradeToSign;
		const int gradeToExec;
};
		
std::ostream&	operator<<(std::ostream&, const AForm&);
#endif
