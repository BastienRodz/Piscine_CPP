/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:23:31 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 17:21:47 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
	std::cout << this->type << " defaultly constructed" << std::endl;
	this->_brain = new Brain;
	return ;
}

Dog::Dog( Dog const & src )
{
	std::cout << this->type << " copy constructed" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	delete( this->_brain );
	std::cout << this->type << " destructed" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = rhs._brain;
	}
	return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << this->type << ": WOUF WOUF ! (saying he loves you <3 )" << std::endl;
    return ;
}
