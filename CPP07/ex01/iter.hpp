/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:58:25 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/01 11:58:19 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iomanip>
# include <iostream>
# include <string.h>

template<class T>
void    iter( T *tab, int size, void (*ft)(T arg))
{
    for (int i = 0; i < size; i++)
    {
        ft(tab[i]);
    }
    return ;
}

template<class  T>
void    print(T i)
{
    std::cout << std::fixed << std::setprecision(2) << i << ", ";
}

#endif