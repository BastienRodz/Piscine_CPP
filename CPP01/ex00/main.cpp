/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:48:53 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 13:24:30 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z = Zombie::newZombie("Patrick");
	Zombie *z_bis = Zombie::newZombie("Michou");
	delete(z_bis);
	z->announce();
	delete(z);
	Zombie::randomChump("Bob");
	Zombie::randomChump("John");
	Zombie::randomChump("Mike");
	return (0);
}