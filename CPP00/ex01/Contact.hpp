/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:28:13 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 10:18:18 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <string>
# include <cstdlib>

class Contact {
        private:
            std::string FirstName;
            std::string LastName;
            std::string Nickname;
            std::string PhoneNumber;
            std::string DarkestSecret;

        public:
            void		Informations(std::string Type, Contact *contact);
            static std::string	TruncColumn(Contact *contact, std::string Type);
            void	    PrintContact(Contact contact);
            static int  is_empty(Contact contact);
            Contact(void);
            ~Contact(void);
 };

#endif