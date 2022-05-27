/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:33:04 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/27 14:37:58 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			c = std::toupper(av[i][j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return 0;
}
