/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:23:07 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/02 15:33:32 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>
# include <exception>

template<typename T>
typename T::const_iterator	easyfind( T &cont, int const i )
{
	typename T::iterator it = find(cont.begin(), cont.end(), i); 
	try 
	{
		if( it == cont.end() )
			std::cerr << "No occurence of " << i << " were found in our container." << std::endl;
		else
			std::cout << "An occurence of " << i << " was found at position " << std::distance(cont.begin(), it) + 1 << " in our container." << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cerr << error.what() << "for i = " << i << std::endl;
	}
	return (static_cast<typename T::const_iterator>(it));
};

class NoOccurence : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("No occurence found ");
	}
};

template<typename T>
void	printer( T &cont )
{
	typename T::iterator it = cont.begin(); 
	typename T::iterator end = cont.end();
	while ( it != end )
	{
		std::cout << *it << ", ";
		it++;
	}
};

#endif /* ******************************************************** EASYFIND_H */