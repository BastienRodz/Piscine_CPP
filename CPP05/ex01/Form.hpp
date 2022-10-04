#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeToSign;
		int	const			_gradeToExec;

	public:
		Form();
		Form(std::string _name, int gradeToSign, int gradeToExec);
		Form( Form const & src );
		~Form();
		Form &		operator=( Form const & rhs );

		std::string const	getName( void ) const;
		bool				getSign( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExec( void ) const;

		void	beSigned( Bureaucrat const & bureaucrat );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form::exception : Grade Too High\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form::exception : Grade Too Low\n");
				}
		};
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */