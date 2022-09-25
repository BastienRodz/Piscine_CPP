/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:46:37 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/23 09:55:35 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
	private:
		std::string name;
		
	public:
						Zombie(void);
						~Zombie(void);
		void			announce(void);
		void			chooseName(std::string name);
};

Zombie*	zombieHorde(int n, std::string name);

#endif