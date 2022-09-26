/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:04:31 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 15:05:03 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

WrongCat::WrongCat( void )
{
    this->type = "WrongCat";
	std::cout << this->type << " defaultly constructed" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << this->type << " copy constructed" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << this->type << " destructed" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void    WrongCat::makeSound( void ) const
{
    std::cout << this->type << ": MIIIIAAAAAOUUUUU ! (asking for your submission)" << std::endl;
    return ;
}
