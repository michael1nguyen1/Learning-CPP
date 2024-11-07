#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form{
	public:
		Form();
		Form(std::string, bool, int, int);
		Form(const Form&);
		~Form() = default;
		Form& operator=(const Form&);
		std::string getName();
		bool getSign();
		int getGrade();
		int getRequiredGrade();
		void beSigned(Bureaucrat&);
		friend std::ostream operator<<(std::ostream&, const Form&);

		class GradeTooHigheException : public std::exception{
			public:
				const char *what()const noexcept override;
		};
		class GradeTooLowException : public std::exception{
			public:
				const char *what()const noexcept override;
		};

	private:
		const std::string name;
		bool sign;
		int grade;
		const int gradeRequired;
};
#endif
