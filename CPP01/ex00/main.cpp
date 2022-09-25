/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:48:53 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/23 09:50:40 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z = newZombie("Patrick");
	Zombie *z_bis = newZombie("Michou");
	delete(z_bis);
	z->announce();
	delete(z);
	randomChump("Bob");
	randomChump("John");
	randomChump("Mike");
	return (0);
}