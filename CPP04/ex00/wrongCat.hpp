/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:01:01 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 15:01:43 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"
# include "iomanip"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat( void );
        WrongCat(const WrongCat & rhs);
        ~WrongCat( void );
        WrongCat &  operator=(const WrongCat & rhs);
        void    makeSound( void ) const;
};

#endif