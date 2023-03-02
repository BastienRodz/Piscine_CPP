/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:11:02 by barodrig          #+#    #+#             */
/*   Updated: 2023/02/25 16:38:30 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) 
{
    if (ac != 2)
	{
        std::cerr << "Usage: ./RPN <input_number>" << std::endl;
        return (1);
    }

	std::string nbr = av[1];
    try
	{
        int result = RPN::calculate(nbr);
        std::cout << result << std::endl;
    } 
	catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
