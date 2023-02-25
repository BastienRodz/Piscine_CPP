#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
: AForm("Robotomy Request Form", 72, 45), _target("NONE")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	( void ) rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if ( !this->getSign() )
		throw FormNotSignedException();
	else if ( this->getGradeToExec() < executor.getGrade() )
		throw FormGradeTooLowToExec();
	else
	{
		std::cout << "Brrrrr brrrrr brrrrrrrr Criiiiiiiiiii Vrrrrrr Bzzz Bzzz" << std::endl;
		int i = std::rand();
		if (i % 2 == 0)
			std::cout << "Congratulations ! " << this->getTarget() << " has successfully been Robotomised !" << std::endl;
		else
			std::cout << "Sorry, something went wrong while robotomizing " << this->getTarget() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/Sign