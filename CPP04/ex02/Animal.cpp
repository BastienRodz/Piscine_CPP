/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:47:45 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 17:31:59 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("None")
{
	std::cout << "Animal defaultly constructed" << std::endl;
	return ;
}

Animal::Animal( std::string const nickname )
    : type(nickname)
{
	std::cout << "Animal " << type << " constructed" << std::endl;
	return ;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal copy constructed" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructed" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

void Animal::makeSound( void ) const
{
    std::cout << "What does the Fox say ??" << std::endl;
}
