/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:05:38 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 17:21:36 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain defaultly constructed" << std::endl;
	return ;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructed" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructed" << std::endl;
	return ;
}

Brain & Brain::operator=( Brain const & rhs )
{
	if (this != &rhs)
    {
        for (int i = 0; i < 99; i++)
		    this->ideas[i] = rhs.ideas[i];
    }
	return (*this);
}
