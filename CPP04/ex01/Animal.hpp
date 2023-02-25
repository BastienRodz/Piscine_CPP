/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:43:08 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/29 11:44:50 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
    protected:
        std::string type;

    public:
        Animal( void );
        Animal( std::string const nickname );
        Animal( Animal const & src );
        virtual ~Animal( void );
        Animal & operator=( Animal const & rhs );
        
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
};

#endif