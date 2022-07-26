/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:19 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/26 15:12:14 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

    std::cout << "Test 1 = One defaultly constructed ClapTrap + One namely constructed" << std::endl;
    ClapTrap Mike;
    ClapTrap Johhny("JohnnyNoxville");

    Mike.attack("JohnnyNoxville");
    Johhny.takeDamage(0);
    Johhny.beRepaired(10);
    Johhny.attack("Mike");
    Mike.takeDamage(0);
    Mike.beRepaired(10);
    std::cout << "- - - - - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

    std::cout << "Test 2 = One defaultly constructed ClapTrap + One copy constructed" << std::endl;
    ClapTrap Mike2;
    ClapTrap Mike2bis(Mike2);
    int i = 0;
    while (i++ < 11)
        Mike2bis.beRepaired(10);
    std::cout << "- - - - - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

    std::cout << "Test 3 = One defaultly constructed ClapTrap + One copy constructed" << std::endl;
    ClapTrap Mike2bisbis(Mike2bis);
    i = 0;
    while (i++ < 10)
        Mike2bisbis.attack("JohnnyNoxville");
    std::cout << "- - - - - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

    return (0);
}