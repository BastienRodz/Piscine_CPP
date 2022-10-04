#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class ShruberryCreationForm : public AForm
{

	public:

		ShruberryCreationForm();
		ShruberryCreationForm(std::string target);
		ShruberryCreationForm( ShruberryCreationForm const & src );
		~ShruberryCreationForm();

		ShruberryCreationForm &		operator=( ShruberryCreationForm const & rhs );

		std::string		getTarget( void ) const;

		void	execute(Bureaucrat const &executor) const;

	private:
		std::string	 _target;

};

#endif /* ******************************************* SHRUBERRYCREATIONFORM_H */