/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:28:52 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 13:47:47 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Create a group of zombie whith chosen names, they are allocated in a single allocation.
//The function return a pointer to the first zombie.
Zombie*	zombieHorde(int n, std::string name)
{
	Zombie*	zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
		zombies[i].chooseName(name);
	return (zombies);
}
