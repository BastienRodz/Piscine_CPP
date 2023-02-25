/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:51:08 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/01 10:57:20 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<class T>
void	swap( T &x, T &y )
{
	T tmp = x;
	x = y;
	y = tmp;
	return ;
}

template<class T>
T	max( T x, T y)
{
	return ( ( x>=y ) ? x : y );
}

template<class T>
T	min( T x, T y)
{
	return ( ( x < y ) ? x : y );
}

#endif /* ******************************************************** WHATEVER_H */