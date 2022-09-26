/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:23:31 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 14:22:13 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
	std::cout << this->type << " defaultly constructed" << std::endl;
	return ;
}

Dog::Dog( Dog const & src )
{
	std::cout << this->type << " copy constructed" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << this->type << " destructed" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << this->type << ": WOUF WOUF ! (saying he loves you <3 )" << std::endl;
    return ;
}