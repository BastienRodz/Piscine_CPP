/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:33:37 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 17:55:25 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::string level;
	
	std::cout << "Enter the level of Harl's complaint (DEBUG, INFO, WARNING or ERROR) : " << std::endl;
	std::cin >> level;
	std::cout << std::endl;
	Harl harl;
	harl.complain(level);
	return (0);
}