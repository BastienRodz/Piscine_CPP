/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:19 by barodrig          #+#    #+#             */
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
}