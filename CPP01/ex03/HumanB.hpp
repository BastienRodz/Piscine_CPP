/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:06:27 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 14:49:27 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon 		*weapon;

	public:
				HumanB(std::string name);
				~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif