/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:03:24 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/04 14:18:05 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <limits>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const 	_name;
		int					_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		
		std::string const	getName( void ) const;
		int					getGrade( void ) const;
		
		void				upGrade( void );
		void				downGrade( void );

		void				signForm( AForm &form ) const;
		void				executeForm( AForm const & form );

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Bureaucrat::exception : Grade Too High\n");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Bureaucrat::exception : Grade Too Low\n");
			}
	};
	
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */