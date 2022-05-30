/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:08:36 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 14:59:05 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return;
}