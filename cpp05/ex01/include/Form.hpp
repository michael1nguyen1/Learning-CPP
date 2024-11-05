#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Form{

	public:
		Form();
		Form& Form(Form&);


	private:
		const std::string name;
		bool signature;
		const int grade;
		const int gradeRequired;

	class GradeTooHighException : public std::exception{
		public:
			const char *what() const noexcept override;
	};

	class GradeTooLowException : public std::exception{
		public:
			const char *what() const noexcept override;
	};
};

#endif
