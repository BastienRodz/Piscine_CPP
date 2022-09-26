/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:58:24 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 15:03:56 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal( void );
        WrongAnimal( std::string const nickname );
        WrongAnimal( WrongAnimal const & src );
        virtual ~WrongAnimal( void );
        WrongAnimal & operator=( WrongAnimal const & rhs );
        std::string getType( void ) const;
        void makeSound( void ) const;
};

#endif