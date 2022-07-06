/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:15:20 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 11:36:51 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	Phonebook phonebook;

	while (cmd != "EXIT")
	{
		if (Phonebook::ContactIndex() > 0)
		std::cout << std::endl;
		std::cout << "Please enter a command :" << std::endl;
		std::getline(std::cin, cmd);
	
		if (cmd == "ADD")
			Phonebook::Add(&phonebook);
		else if (cmd == "SEARCH")
			Phonebook::Search(&phonebook);
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Please enter ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}