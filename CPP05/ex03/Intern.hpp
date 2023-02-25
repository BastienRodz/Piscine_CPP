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
	private:
		AForm			*createPresidentialPardon( std::string target );
		AForm			*createRobotomyRequest( std::string target );
		AForm			*createShruberryCreationForm( std::string target );

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm			*makeForm( std::string formName, std::string formTarget );

		class CantFindForm : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Intern::exception : Sorry, the intern can't find this form.\n");
				}
		};

};

#endif /* ********************************************************** INTERN_H */