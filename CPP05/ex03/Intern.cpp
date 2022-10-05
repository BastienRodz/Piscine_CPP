#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void) rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm					*Intern::createPresidentialPardon( std::string target )
{
	AForm	*form = new PresidentialPardonForm(target);
	return (form);
}

AForm					*Intern::createRobotomyRequest( std::string target )
{
	AForm	*form = new RobotomyRequestForm(target);
	return (form);
}

AForm					*Intern::createShruberryCreationForm( std::string target )
{
	AForm	*form = new ShruberryCreationForm(target);
	return (form);
}

AForm					*Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm	*(Intern::*create_ptr[3])(std::string) = {
		&Intern::createPresidentialPardon, 
		&Intern::createRobotomyRequest, 
		&Intern::createShruberryCreationForm
	};
	
	std::string	formNames[3] = {
		"presidential pardon",
		"robotomy request",
		"shruberry creation"
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
			return ((this->*create_ptr[i])(formTarget));
	}
	return (NULL);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */