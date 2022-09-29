/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:50:29 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/29 16:07:37 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;

    public:
        Cat( void );
        Cat(const Cat & rhs);
        ~Cat( void );
        Cat & operator=( Cat const & rhs );
        
        void    makeSound( void ) const;
        void    printBrain( int n );
};

#endif