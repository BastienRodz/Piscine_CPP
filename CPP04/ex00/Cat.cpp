/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:20:52 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 15:58:51 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    this->type = "Cat";
	std::cout << this->type << " defaultly constructed" << std::endl;
	return ;
}

Cat::Cat( Cat const & src )
{
	std::cout << this->type << " copy constructed" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << this->type << " destructed" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << this->type << ": MIIIIAAAAAOUUUUU ! (asking for your submission)" << std::endl;
    return ;
}