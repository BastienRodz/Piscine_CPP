/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:23:07 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/02 09:34:32 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>
# include <exception>

template<typename T>
void	easyfind( T &cont, int i )
{
	typename T::iterator it = find(cont.begin(), cont.end(), i); 
	if ( it == cont.end() )
		std::cout << "No occurence of " << i << " were found in our container." << std::endl;
	else
		std::cout << "An occurence of " << i << "was found at " << *it << " in our container." << std::endl;
};

template<typename T>
void	printer( T &cont )
{
	typename T::iterator it = cont.begin(); 
	typename T::iterator end = cont.end();
	while ( it++ != end )
	{
		std::cout << *it << ", ";
	}
};

#endif /* ******************************************************** EASYFIND_H */