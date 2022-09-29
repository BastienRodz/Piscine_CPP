/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:05:38 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/29 16:21:08 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain defaultly constructed" << std::endl;
	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = generateRandomWords(26);
	return ;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructed" << std::endl;
	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = src._ideas[i];
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
        for (int i = 0; i < 100; i++)
		    this->_ideas[i] = rhs._ideas[i];
    }
	return (*this);
}

std::string Brain::generateRandomWords( int n )
{
	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
								'r','s','t','u','v','w','x','y','z'};
	std::string random = "";
	for ( int i = 0; i < n; i++ )
		random = random + letters[std::rand() % 26];
	return (random);
}

void	Brain::printMind( int n )
{
	for ( int i = 0; i < n; i++ )
	{
		if ( !_ideas[i].empty() )
			std::cout << "Idea[" << i << "] = " << _ideas[i] << std::endl;
	}
	return ;
}
