/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:19 by barodrig          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/26 15:02:27 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Mike;
    ClapTrap Johhny("JohnnyNoxville");

    Mike.attack("JohnnyNoxville");
    Johhny.takeDamage(0);
    Johhny.beRepaired(10);
    Johhny.attack("Mike");
    Mike.takeDamage(0);
    Mike.beRepaired(10);

    return (0);
=======
/*   Updated: 2022/07/27 17:17:38 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << "Testing functions" << std::endl;
		ClapTrap	clapTrap("Clappy");
		ScavTrap	scavTrap("Scavvy");
		
		scavTrap.attack("random human");
		clapTrap.attack("random human");
		scavTrap.guardGate();
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(10);
		scavTrap.takeDamage(800);
		scavTrap.takeDamage(30);
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(1);
		scavTrap.attack("Clappy");
	}
	{
		std::cout << "Checking without energy" << std::endl;
		ScavTrap	scavTrap("Scavvy");

		for (int i = 0; i < 50; i++)
			scavTrap.attack("random human");
		scavTrap.beRepaired(10);
		scavTrap.attack("random human");
		scavTrap.takeDamage(100);
	}
	return (0);
>>>>>>> 8d7423ca64024776acdb381d6368740a7c9e7e40
}