/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:19 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 11:38:12 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
		std::cout << "\n\nChecking without energy" << std::endl;
		ScavTrap	scavTrap;

		for (int i = 0; i < 50; i++)
			scavTrap.attack("random human");
		scavTrap.beRepaired(10);
		scavTrap.attack("random human");
		scavTrap.takeDamage(100);
	}
	{
		std::cout << "\n\n----- Let's use FragTrap now -----\n";
		FragTrap	froggyTheFrag;
		
		froggyTheFrag.attack("Johnny Knoxville");
		froggyTheFrag.beRepaired(100);
		froggyTheFrag.takeDamage(201);
		froggyTheFrag.attack("Johnny Knoxville");
		froggyTheFrag.beRepaired(1);
		froggyTheFrag.highFiceGuys();
		froggyTheFrag.attack("Johnny Knoxville");
	}
	return (0);
}