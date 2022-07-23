/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:02:48 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/23 19:40:36 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits;
        
    public:
        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed(void);
        Fixed & operator=(Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif