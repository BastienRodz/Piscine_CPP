/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:23:06 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/23 10:12:01 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

// This program search av[2] (s1) in a file given as av[1] (filename)
// then it replaces s1 by s2 in the file.

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	
	std::fstream		filein(av[1], std::ios::in);
	const std::string	filename = av[1];
	const std::string 	finalname = filename + ".replace";
	std::ofstream		fileout;

	if (!filein.is_open())
	{
		std::cerr << "Error: file " << filename << " not found or can't be opened" << std::endl;
		return (1);
	}
	const std::string	s1 = av[2];
	const std::string	s2 = av[3];
	std::string			line;
	std::string			final;
	size_t				i;
	while (getline(filein, line))
	{
		while (1)
		{
			i = line.find(s1);
			if (i == std::string::npos)
			{
				final += line;
				break;
			}
			line.erase(i, strlen(av[2]));
			line.insert(i, s2);
		}
		final += "\n";
	}
	fileout.open(finalname.c_str(), std::ios::out);
	fileout << final;
	filein.close();
	fileout.close();
	return (0);
}
