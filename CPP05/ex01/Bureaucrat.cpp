/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:23:03 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/03 13:46:20 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
: _name("Asterix"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name( (std::string const) name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
: _name(src._name), _grade(src._grade)
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Bureaucrat::upGrade( void )
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
	return ;
}

void		Bureaucrat::downGrade( void )
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}


/* ************************************************************************** */