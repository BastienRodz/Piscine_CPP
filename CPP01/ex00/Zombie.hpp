/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:49:03 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 13:19:42 by barodrig         ###   ########.fr       */
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
						Zombie(std::string name);
						~Zombie(void);
		void			announce(void);
		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);
};

#endif