#include "ShruberryCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShruberryCreationForm::ShruberryCreationForm()
: AForm("Shruberry Creation Form", 145, 137), _target("NONE")
{
}

ShruberryCreationForm::ShruberryCreationForm(std::string target)
: AForm("Shruberry Creation Form", 145, 137), _target(target)
{
}

ShruberryCreationForm::ShruberryCreationForm( const ShruberryCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShruberryCreationForm::~ShruberryCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShruberryCreationForm &				ShruberryCreationForm::operator=( ShruberryCreationForm const & rhs )
{
	( void ) rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShruberryCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream file;

	if ( !this->getSign() )
		throw FormNotSignedException();
	else if ( this->getGradeToExec() < executor.getGrade() )
		throw FormGradeTooLowToExec();
	else
	{
		file.open((_target + "_shruberry").c_str());
		if ( !file.is_open() || !file.good() )
			throw CantOpenFile();
		else
		{
			file << " ^  ^   ^  ^  ^   ^  ^" << std::endl;
			file << "/|\\/|\\ /|\\/|\\/|\\ /|\\/|\\" << std::endl;
			file << "/|\\/|\\ /|\\/|\\/|\\ /|\\/|\\" << std::endl;
			file << "/|\\/|\\ /|\\/|\\/|\\ /|\\/|\\" << std::endl;
			file << "/|\\/|\\ /|\\/|\\/|\\ /|\\/|\\" << std::endl;
		}
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string					ShruberryCreationForm::getTarget( void ) const
{
	return (this->_target);
}


/* 
******************************RobotomyRequestForm::*****************************
*/