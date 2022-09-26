/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:50:29 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 14:20:04 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"
# include "iomanip"

class Cat : public Animal
{
    public:
        Cat( void );
        Cat(const Cat & rhs);
        ~Cat( void );
        Cat &  operator=(const Cat & rhs);
        void    makeSound( void ) const;
};

#endif