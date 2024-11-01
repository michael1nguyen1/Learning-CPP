#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat{
	public:
		Bureaucrat() = default;
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat() = default;
		std::string getName();
		int getGrade();

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