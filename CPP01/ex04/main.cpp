/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:23:06 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 16:02:34 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// This program search av[2] (s1) in a file given as av[1] (filename)
// then it replaces s1 by s2 in the file.
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./sed <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::fstream	file(av[1]);
	std::string		filename = av[1];
	if (!file.is_open())
	{
		std::cout << "Error: file " << filename << " not found or can't be opened" << std::endl;
		return (1);
	}
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		line;
	size_t			i;
	while (getline(file, line))
	{
		i = 0;
		while (i < line.size())
		{
			if (line.compare(i, s1.size(), s1) == 0)
			{
				line.erase(i, s1.size());
				line.insert(i, s2);
				i += s2.size();
			}
			else
				i++;
		}
		file << line << std::endl;
	}
	file.close();
	return (0);
}