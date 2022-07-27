/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:02:42 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/27 17:18:48 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void)
        : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = src.getRawBits();
}

Fixed::Fixed(int const n)
        : _fixedPointValue(n << Fixed::_fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n)
        : _fixedPointValue(roundf(n * (1 << Fixed::_fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs)
{
    out << rhs.toFloat();
    return (out);
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}
