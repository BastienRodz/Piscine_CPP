/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:02:13 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 15:04:18 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal defaultly constructed" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( std::string const nickname )
    : type(nickname)
{
	std::cout << "WrongAnimal " << type << " constructed" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal copy constructed" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructed" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "What does the WrongAnimal say ??" << std::endl;
}
