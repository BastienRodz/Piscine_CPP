/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:07:41 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 11:13:16 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class Phonebook {
	
	private:
		static int Index;
		Contact contact[8];
		
	public:
		Phonebook(void);
		~Phonebook(void);
		static int 			ContactIndex(void);
		static void 		Add(Phonebook *phonebook);
		static void 		Search(Phonebook *phonebook);

};


#endif