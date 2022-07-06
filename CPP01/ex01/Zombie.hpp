/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:46:37 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 13:19:33 by barodrig         ###   ########.fr       */
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
		static Zombie*	zombieHorde(int n, std::string name);
};

#endif