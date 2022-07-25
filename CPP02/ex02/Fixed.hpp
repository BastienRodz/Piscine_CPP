/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:02:48 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/25 18:19:12 by barodrig         ###   ########.fr       */
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
        Fixed & operator=( Fixed const & rhs );
        bool   operator>( Fixed const & rhs ) const;
        bool   operator<( Fixed const & rhs ) const;
        bool   operator>=( Fixed const & rhs ) const;
        bool   operator<=( Fixed const & rhs ) const;
        bool   operator==( Fixed const & rhs ) const;
        bool   operator!=( Fixed const & rhs ) const;
        Fixed   operator+( Fixed const & rhs ) const;
        Fixed   operator-( Fixed const & rhs ) const;
        Fixed   operator*( Fixed const & rhs ) const;
        Fixed   operator/( Fixed const & rhs ) const;
        Fixed & operator++( );      //Prefix increment
        Fixed   operator++( int );  //Postfix increment
        Fixed & operator-- ( );     //Prefix decrement
        Fixed   operator-- ( int ); //Postfix decrement
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
        static Fixed    min( Fixed & n1, Fixed & n2 );
        static Fixed    min( Fixed const & n1, Fixed const & n2 );
        static Fixed    max( Fixed & n1, Fixed & n2 );
        static Fixed    max( Fixed const & n1, Fixed const & n2 );
};

std::ostream &  operator<<( std::ostream & out, Fixed const & rhs);

#endif