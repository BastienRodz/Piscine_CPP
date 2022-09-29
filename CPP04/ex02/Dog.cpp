/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:23:31 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/29 16:20:51 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"), _brain(new Brain())
{
	std::cout << this->type << " defaultly constructed" << std::endl;
	return ;
}

Dog::Dog( Dog const & src ) : Animal(src), _brain(new Brain(*(src._brain)))
{
	std::cout << this->type << " copy constructed" << std::endl;
}

Dog::~Dog(void)
{
	delete( _brain );
	std::cout << this->type << " destructed" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		*(this->_brain) = *(rhs._brain);
	}
	return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << this->type << ": WOUF WOUF ! (saying he loves you <3 )" << std::endl;
    return ;
}

void	Dog::printBrain( int n )
{
	if (n > 100 || n <= 0)
		std::cout << "I am sorry, my mind does not work like taht :'( ... " << std::endl;
	else
		this->_brain->printMind(n);
	return ;
}
