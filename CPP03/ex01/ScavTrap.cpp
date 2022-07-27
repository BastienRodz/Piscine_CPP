/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:27:42 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/27 14:53:12 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
    : ClapTrap( "Scavydooooo" )
{
    _hp = 100;
    _ep = 50;
    _dmg = 20;
    std::cout << _name << " : was forged into Mount Doom by Xavier Niel..." << std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name ) 
    : ClapTrap( name )
{
    _hp = 100;
    _ep = 50;
    _dmg = 20;
    std::cout << _name << " : was given a name and some legs by a god..." << std::endl;
    return ;
}

ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap( src )
{
    *this = src;
    std::cout << _name << " : was given life as a clone by Dr Vegapunk !" << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << _name << " : left Middle Earth to answer the Valar's call... (Frodo was in his bag !)" << std::endl;
    return ;
}

ScavTrap    &ScavTrap::operator=( const ScavTrap &rhs )
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

void        ScavTrap::guardGate( void )
{
    std::cout << this->_name << " : has entered Gate keeper mode. He is now stronger than the BlueWall. O_O" << std::endl;
}
