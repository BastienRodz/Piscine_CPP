/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:49:57 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 13:51:20 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	int	n = 0;
	int	i;
	if (ac < 2)
		return (1);
	else
		n = atoi(av[1]);
	if (n <= 0)
		return (std::cout << "Error: number of zombies must be positive" << std::endl, 1);
	Zombie *z = zombieHorde(n, "Patrick");
	for (i = 0; i < n; i++)
		z[i].announce();
	delete[] z;
	return (0);
}
