/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:05:40 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:35 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon 		&weapon;

	public:
				HumanA(std::string name, Weapon &weapon);
				~HumanA(void);
		void	attack(void);
};

#endif