#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeToSign;
		int	const			_gradeToExec;

	public:
		AForm();
		AForm(std::string _name, int gradeToSign, int gradeToExec);
		AForm( AForm const & src );
		virtual ~AForm();
		AForm &		operator=( AForm const & rhs );

		std::string const	getName( void ) const;
		bool				getSign( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExec( void ) const;

		void				setName( std::string const name );
		void				setGradeToSign( int i );
		void				setGradeToExec( int i );


		virtual void		beSigned( Bureaucrat const & bureaucrat );
		virtual void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("AForm::exception : Grade Too High\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("AForm::exception : Grade Too Low\n");
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("AForm::exception : Form not signed\n");
				}
		};

		class FormGradeTooLowToExec : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("AForm::exception : Bureaucrat grade is too low to execute form\n");
				}
		};

		class CantOpenFile : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("AForm::exception : Bureaucrat is not able to open your target file\n");
				}
		};
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */