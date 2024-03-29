/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:23:03 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/05 14:23:46 by barodrig         ###   ########.fr       */
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

void		Bureaucrat::signForm( AForm &AForm ) const
{
	try
	{
		AForm.getSign();
	}
	catch (std::exception &e)
    {
		return ;
    }
	try
	{
		AForm.beSigned(*this);
	}
	catch (std::exception &e)
	{
		return ;
	}
}

void		Bureaucrat::executeForm( AForm const & form )
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " could not execute this form : " << e.what() << std::endl;
	}
	
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