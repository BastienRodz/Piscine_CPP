/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:02:48 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/25 11:19:57 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits;
        
    public:
        Fixed(void);
        Fixed(int const n);
        Fixed(float const n);
        Fixed(Fixed const & src);
        ~Fixed(void);
        Fixed & operator=(Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream &  operator<<( std::ostream & out, Fixed const & rhs);

#endif