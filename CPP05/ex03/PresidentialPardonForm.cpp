#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
: AForm("Presidential Pardon Form", 25, 5), _target("NONE")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Presidential Pardon Form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	( void ) rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void						PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if ( !this->getSign() )
		throw FormNotSignedException();
	else if ( this->getGradeToSign() < executor.getGrade() )
		throw FormGradeTooLowToExec();
	else
		std::cout << this->getTarget() << " has received a presidential pardon by Zaphod Beeblebrox." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string					PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}


/* ************************************************************************** */