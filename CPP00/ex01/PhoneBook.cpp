/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:15:25 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 10:27:16 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int Phonebook::Index = 0;

Phonebook::Phonebook(void)
{
	return;
}

Phonebook::~Phonebook(void)
{
	return ;
}

int Phonebook::ContactIndex(void)
{
	return (Phonebook::Index);
}

void	Phonebook::Add(Phonebook *phonebook)
{
	Contact *contact;

	contact = phonebook->contact;
	if (Phonebook::Index < 8)
		Phonebook::Index++;
	else
		Phonebook::Index = 1;
	std::cout << std::endl << "Adding a new contact at index number " << Phonebook::Index << std::endl;
	contact[Phonebook::Index - 1].Contact::Informations("First Name", &contact[Phonebook::Index - 1]);
	contact[Phonebook::Index - 1].Contact::Informations("Last Name", &contact[Phonebook::Index - 1]);
	contact[Phonebook::Index - 1].Contact::Informations("Nickname", &contact[Phonebook::Index - 1]);
	contact[Phonebook::Index - 1].Contact::Informations("Phone Number", &contact[Phonebook::Index - 1]);
	contact[Phonebook::Index - 1].Contact::Informations("Darkest Secret", &contact[Phonebook::Index - 1]);
	return ;
}

void	Phonebook::Search(Phonebook *phonebook)
{
	int			i = -1;
	int			flag = 0;
	Contact		*contact = phonebook->contact;
	std::string desired_index;
	
	if (Contact::is_empty(contact[0]))
	{
		std::cout << "\nDo you want to search a contact in an empty phonebook ?\nAre you mad ?!" << std::endl;
		return ;
	}
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	while (i < 7 && !Contact::is_empty(contact[++i]))
	{
		std::cout << "|    " << i + 1 << "     |";
		std::cout << Contact::TruncColumn(&contact[i], "First Name") << "|";
		std::cout << Contact::TruncColumn(&contact[i], "Last Name") << "|";
		std::cout << Contact::TruncColumn(&contact[i], "Nickname") << "|" << std::endl;
	}
	std::cout << std::endl << "Please input the contact's index you want to open :" << std::endl;
	while (!flag)
	{
		std::getline(std::cin, desired_index);
		if (desired_index.empty())
			std::cout << "The index can't be empty. Again, input a valid index number :" << std::endl;
		else if (((std::atoi(desired_index.c_str()) < 1 || std::atoi(desired_index.c_str()) > 8))\
			|| (Contact::is_empty(contact[std::atoi(desired_index.c_str()) - 1]) \
			&& std::atoi(desired_index.c_str()) > Phonebook::ContactIndex()))
			std::cout << "The index is not valid. Again, input a valid index number :" << std::endl;
		else
		{
			i = atoi(desired_index.c_str()) - 1;
			flag = 1;
		}
	}
	std::cout << std::endl << "Here are your contact details :" << std::endl;
	contact[i].PrintContact(contact[i]);
	return ;
}