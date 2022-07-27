/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:48 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/27 14:55:42 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: _name("JimmyPunchline"), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap " << _name << " defaultly constructed" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const nickname )
	: _name(nickname), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	std::cout << "ClapTrap " << _name << " copy constructed from " << src._name << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " destructed" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_ep = rhs._ep;
		this->_dmg = rhs._dmg;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string & target )
{
	if (--_ep < 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack, it is out of energy" << std::endl;
		return ;
	}
	else
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _dmg << " point of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (--_ep < 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair, it is out of energy" << std::endl;
		return ;
	}
	else
	{
		_hp += amount;
		std::cout << "ClapTrap " << _name << " is repaired by " << amount << std::endl;
		std::cout << "ClapTrap " << _name << " has now " << _hp << " HP and " << _ep << " Energy Point(s)" << std::endl;
	}
	return ;
}
