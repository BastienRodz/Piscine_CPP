/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:20:36 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/28 11:38:08 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
    : type("None")
{
    std::cout << "AMateria defaultly constructed." << std::endl;
    return ;
}

AMateria::AMateria( std::string const & type )
    : type(type)
{
    std::cout << "AMateria " << type << " constructed." << std::endl;
    return ;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

AMateria::AMateria( AMateria const & src )
{
	std::cout << "AMateria copy constructed" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructed" << std::endl;
	return ;
}

std::string const & AMateria::getType() const
{
    return (type);
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "doing something to " << target.getName() << std::endl;
    return ;
}