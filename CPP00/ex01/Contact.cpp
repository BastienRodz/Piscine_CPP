/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:32:48 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/07 13:40:40 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    this->FirstName = "";
    this->LastName = "";
    this->Nickname = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
}

Contact::~Contact(void)
{
    return ;
}

void	Contact::Informations(std::string Type, Contact *contact)
{
	std::string str;
	int			flag = 0;
	std::string *TypeRef;;

	if (Type == "First Name")
		TypeRef = &contact->FirstName;
	else if (Type == "Last Name")
		TypeRef = &contact->LastName;
	else if (Type == "Nickname")
		TypeRef = &contact->Nickname;
	else if (Type == "Phone Number")
		TypeRef = &contact->PhoneNumber;
	else
		TypeRef = &contact->DarkestSecret;
	
	std::cout << "Enter the contact " << Type << " : ";
	while (!flag)
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << "WOW ! Really ? Don't be that violent dude !" << std::endl;
			std::cin.clear();
			return ;
		}
		if (str.empty())
			std::cout << "A contact field can't be empty, please write something" << std::endl;
		else
			flag = 1;
	}
	*TypeRef = str;
	return ;
}

std::string	Contact::TruncColumn(Contact *contact, std::string Type)
{
	std::string str;
	
	if (Type == "First Name")
		str = contact->FirstName;
	else if (Type == "Last Name")
		str = contact->LastName;
	else
		str = contact->Nickname;
	
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	else if (str.length() < 10)
	{
		while(str.length() < 10)
			str += ' ';
		return (str);
	}
	else
		return (str);
}

void	Contact::PrintContact(Contact contact)
{
	std::cout << "First Name     = " << contact.FirstName << std::endl;
	std::cout << "Last Name      = " << contact.LastName << std::endl;
	std::cout << "Nickname       = " << contact.Nickname << std::endl;
	std::cout << "Phone Number   = " << contact.PhoneNumber << std::endl;
	std::cout << "Darkest Secret = " << contact.DarkestSecret << std::endl;
	std::cout << std::endl;
}

int		Contact::is_empty(Contact contact)
{
	if (contact.FirstName.empty() && contact.LastName.empty() && contact.Nickname.empty() && contact.PhoneNumber.empty() && contact.DarkestSecret.empty())
		return (1);
	else
		return (0);
}
