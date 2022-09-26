/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                            endifC                        +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:51:38 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 11:51:49 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Brain.hpp"
# include "Animal.hpp"
# include "iomanip"

class Dog : public Animal
{
    private:
        Brain* _brain;

    public:
        Dog( void );
        Dog(const Dog & rhs);
        ~Dog( void );
        Dog &  operator=(const Dog & rhs);
        void    makeSound( void ) const;
};

#endif
