/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:07:41 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/27 18:34:44 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include <cstdlib>

class Phonebook {
	
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;

		static int	Index;
		void		Informations(std::string Type, std::string &TypeRef);
		void		PrintContact(Phonebook contact);
		
	public:
		static int	ContactIndex(void);
		static void	Add(Phonebook &contact);
		static void	Search(Phonebook *contact);
		Phonebook(void);
		~Phonebook(void);
};

#endif