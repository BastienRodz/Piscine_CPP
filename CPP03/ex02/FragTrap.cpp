/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:15:19 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 11:32:06 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
    : ClapTrap( "Fragydooooo" )
{
    _hp = 100;
    _ep = 100;
    _dmg = 30;
    std::cout << "FragTrap " << _name << " : was forged into Mount Doom by Xavier Niel..." << std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) 
    : ClapTrap( name )
{
    _hp = 100;
    _ep = 100;
    _dmg = 30;
    std::cout << "FragTrap " << _name << " : has risen from the Great Nothing..." << std::endl;
    return ;
}

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap( src )
{
    *this = src;
    std::cout << "FragTrap " << _name << " : is a Mime !" << std::endl;
    return ;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap " << _name << " : decides to go far far far far far far ... away. Bye bye !" << std::endl;
    return ;
}

FragTrap    &FragTrap::operator=( const FragTrap &rhs )
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

void	FragTrap::attack( const std::string & target )
{
	if (--_ep < 0)
		std::cout << "FragTrap " << _name << "can't attacks, it has became a non-violent protester ! :o" << std::endl;
	else if (_hp <= 0)
        std::cout << "FragTrap " << _name << " is taking a loooong nap. Do you want him to wake up ? Then repair him you fool !" << std::endl;
	else
		std::cout << "FragTrap " << _name << " attacks THUNDERBOLT !!! PIKAAAAAASCHTROUMF " << target << " causing " << _dmg << " point of damage!" << std::endl;
	return ;
}

void        FragTrap::highFiceGuys( void )
{
    std::cout << "FragTrap " << this->_name << " : High Five ? :D :D :D ... Bro... HIGH FIVE ?!" << std::endl;
}
