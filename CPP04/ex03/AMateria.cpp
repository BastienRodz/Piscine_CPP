/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:20:36 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/28 13:29:29 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria( void )
    : type("None")
{
    std::cout << "AMateria constructor called." << std::endl;
    return ;
}

AMateria::AMateria( std::string const & type )
    : type(type)
{
    std::cout << "AMateria " << type << " constructed." << std::endl;
    return ;
}

AMateria::AMateria( AMateria const & src )
{
	std::cout << "AMateria copy constructed" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructed" << std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria & AMateria::operator=( AMateria const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void    AMateria::use( ICharacter& target )
{
    std::cout << "doing something to " << target.getName() << std::endl;
    return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & AMateria::getType() const
{
    return (type);
}

/* ************************************************************************** */