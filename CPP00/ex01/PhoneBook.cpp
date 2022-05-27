/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:15:25 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/27 18:32:33 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int Phonebook::Index = 0;

Phonebook::Phonebook(void)
{
	FirstName = "";
	LastName = "";
	Nickname = "";
	PhoneNumber = "";
	DarkestSecret = "";
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

void	Phonebook::Add(Phonebook &contact)
{
	if (Phonebook::Index == 8)
		Phonebook::Index--;
	Phonebook::Index++;
	std::cout << "Adding a new contact at index number " << Phonebook::Index << std::endl;
	contact.Informations("First Name", contact.FirstName);
	contact.Informations("Last Name", contact.LastName);
	contact.Informations("Nickname", contact.Nickname);
	contact.Informations("Phone Number", contact.PhoneNumber);
	contact.Informations("Darkest Secret", contact.DarkestSecret);
	return ;
}

void	Phonebook::Informations(std::string Type, std::string &TypeRef)
{
	std::string str;
	int			flag = 0;
	
	std::cout << "Enter the contact " << Type << " : ";
	while (!flag)
	{
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "A contact field can't be empty, please write something" << std::endl;
		else
			flag = 1;
	}
	TypeRef = str;
	std::cout << "Your entered the " << Type << " : " << TypeRef << std::endl;
	return ;
}

void	Phonebook::PrintContact(Phonebook contact)
{
	std::cout << "First Name     = " << contact.FirstName << std::endl;
	std::cout << "Last Name      = " << contact.LastName << std::endl;
	std::cout << "Nickname       = " << contact.Nickname << std::endl;
	std::cout << "Phone Number   = " << contact.PhoneNumber << std::endl;
	std::cout << "Darkest Secret = " << contact.DarkestSecret << std::endl;
	std::cout << std::endl;
}

void	Phonebook::Search(Phonebook *contact)
{
	int			i = -1;
	std::string desired_index;
	int			flag = 0;
	
	if (Phonebook::ContactIndex() == 0)
	{
		std::cout << "Do you want to search a contact in an empty phonebook ?\n Are you mad ?!" << std::endl;
		return ;
	}
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	while (++i < Phonebook::ContactIndex())
	{
		std::cout << "|    " << i + 1 << "     |";
		std::cout << contact[i].FirstName << "|";
		std::cout << contact[i].LastName << "|";
		std::cout << contact[i].Nickname << "|" << std::endl;
	}
	std::cout << "Please input the contact's index you want to open :" << std::endl;
	while (!flag)
	{
		std::getline(std::cin, desired_index);
		if (desired_index.empty())
			std::cout << "The index can't be empty. Again, input a valid index number :" << std::endl;
		else if (std::atoi(desired_index.c_str()) > Phonebook::ContactIndex()\
			&& std::atoi(desired_index.c_str()) <= 1)
			std::cout << "The index is not valid. Again, input a valid index number :" << std::endl;
		else
		{
			i = atoi(desired_index.c_str()) - 1;
			flag = 1;
		}
	}
	std::cout << "Here are your contact details :" << std::endl;
	contact[i].PrintContact(contact[i]);
	return ;
}