/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:15:20 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/27 19:53:36 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	Phonebook	contact[8];

	while (cmd != "EXIT")
	{
		if (Phonebook::ContactIndex() > 0)
			std::cout << std::endl;
		std::cout << "Please enter a command :" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			Phonebook::Add(contact[Phonebook::ContactIndex()]);
		else if (cmd == "SEARCH")
			Phonebook::Search(contact);
		else if (cmd != "EXIT")
			std::cout << std::endl << "Please enter ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}