/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:20:52 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 17:30:47 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"), _brain(new Brain())
{
	std::cout << this->type << " defaultly constructed" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal(src), _brain(new Brain(*(src._brain)))
{
	std::cout << this->type << " copy constructed" << std::endl;
}

Cat::~Cat(void)
{
	delete( this->_brain );
	std::cout << this->type << " destructed" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		*(this->_brain) = *(rhs._brain); 
	}
	return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << this->type << ": MIIIIAAAAAOUUUUU ! (asking for your submission)" << std::endl;
    return ;
}