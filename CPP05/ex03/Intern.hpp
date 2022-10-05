#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm			*makeForm( std::string formName, std::string formTarget );

	private:
		AForm			*createPresidentialPardon( std::string target );
		AForm			*createRobotomyRequest( std::string target );
		AForm			*createShruberryCreationForm( std::string target );

};

#endif /* ********************************************************** INTERN_H */