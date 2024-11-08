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
		Form& operator=(const Form&) = delete;
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
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
		const int gradeToSign;
		const int gradeToExec;
};
#endif
