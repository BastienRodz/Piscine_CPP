#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
: _name("Laissez-Passer A38"), _signed(0),
	_gradeToSign(2), _gradeToExec(1)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExec)
: _name((std::string const)name), _signed(0),
	_gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	else
		return ;
}

Form::Form( const Form & src )
: _name(src._name), _signed(src._signed),
	_gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form name = " << i.getName() << ", signed value is " << i.getSign()\
		<< ", grade to sign is " << i.getGradeToSign() << ", grade to exec is "\
		<< i.getGradeToExec() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned( Bureaucrat const & bureaucrat )
{
	try
	{
		if (this->getSign())
			throw FormNotSignedException();
	}
	catch (std::exception & e)
	{
		std::cout << bureaucrat.getName() << " can't sign, " << this->getName() << " has already been signed." << std::endl;
		return ;
	}
	try
	{
		if ( bureaucrat.getGrade() <= this->getGradeToSign() )
		{
			this->_signed = 1;
			std::cout << bureaucrat.getName() << " signed " << this->getName() << "." << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << this->getName()\
		<< " because his grade is to low..." << std::endl;;
	}
	return ;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getSign( void ) const
{
	return (this->_signed);
}

int					Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int					Form::getGradeToExec( void ) const
{
	return (this->_gradeToExec);
}


/* ************************************************************************** */