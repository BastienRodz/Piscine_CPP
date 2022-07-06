/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:48:55 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 13:30:41 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Here the allocation has been made on the heap, it won't be destroyed at the end of the function.
// The reason it has been allocated on the heap is because it is used in the main function.
// We need to access it later.

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name);
	return (zombie);
}
