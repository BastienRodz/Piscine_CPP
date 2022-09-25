/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:08:36 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/23 10:04:57 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	this->weapon = NULL;
	return;
}

void	HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->name << "attacks with his head (OUCH !)" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return;
}