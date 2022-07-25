/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:02:42 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/25 18:55:20 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void)
        : _fixedPointValue(0)
{
    return ;
}

Fixed::Fixed(Fixed const & src)
{
    _fixedPointValue = src.getRawBits();
    return ;
}

Fixed::Fixed(int const n)
        : _fixedPointValue(n << Fixed::_fractionalBits)
{
    return ;
}

Fixed::Fixed(float const n)
        : _fixedPointValue(roundf(n * (1 << Fixed::_fractionalBits)))
{
    return ;
}

Fixed::~Fixed(void)
{
    return ;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_fixedPointValue) / (1 << Fixed::_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_fixedPointValue >> Fixed::_fractionalBits);
}

int     Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

Fixed    Fixed::min( Fixed & n1, Fixed & n2)
{
    return (n1 < n2 ? n1 : n2);
}

Fixed    Fixed::min( Fixed const & n1, Fixed const & n2)
{
    return (n1 < n2 ? n1 : n2);
}

Fixed    Fixed::max( Fixed & n1, Fixed & n2)
{
    return (n1 > n2 ? n1 : n2);
}

Fixed    Fixed::max( Fixed const & n1, Fixed const & n2)
{
    return (n1 > n2 ? n1 : n2);
}

// Assignation opertor //

Fixed & Fixed::operator=( Fixed const & rhs )
{
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

// Comparison operators //

bool    Fixed::operator>( Fixed const & rhs ) const
{
    return (this->_fixedPointValue > rhs._fixedPointValue);
}

bool    Fixed::operator<( Fixed const & rhs ) const
{
    return (this->_fixedPointValue < rhs._fixedPointValue);
}

bool    Fixed::operator>=( Fixed const & rhs ) const
{
    return (this->_fixedPointValue >= rhs._fixedPointValue);
}

bool    Fixed::operator<=( Fixed const & rhs ) const
{
    return (this->_fixedPointValue <= rhs._fixedPointValue);
}

bool    Fixed::operator==( Fixed const & rhs ) const
{
    return (this->_fixedPointValue == rhs._fixedPointValue);
}

bool    Fixed::operator!=( Fixed const & rhs ) const
{
    return (this->_fixedPointValue != rhs._fixedPointValue);
}

// Arithmetic operator //

Fixed   Fixed::operator+( Fixed const & rhs ) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-( Fixed const & rhs ) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*( Fixed const & rhs ) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/( Fixed const & rhs ) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

// Increment or Decrement operators //

Fixed & Fixed::operator++( void )
{
    (this->_fixedPointValue) += 1;
    return (*this);
}

Fixed & Fixed::operator--( void )
{
    (this->_fixedPointValue) -= 1;
    return (*this);
}

Fixed   Fixed::operator++( int n )
{
    Fixed tmp(*this);
    
    if (n >= 0)
    {
        while (n-- >= 0)
            ++(*this);
    }
    else
    {
        while (n-- >= 0)
            --(*this);
    }
    return (tmp);
}

Fixed   Fixed::operator--( int n )
{
    Fixed   tmp(*this);
    
    if (n >= 0)
    {
        while (n-- >= 0)
            --(*this);
    }
    else
    {
        while (n-- >= 0)
            ++(*this);
    }
    return (tmp);
}

// Insertion operator //

std::ostream & operator<<(std::ostream & out, Fixed const & rhs)
{
    out << rhs.toFloat();
    return (out);
}
