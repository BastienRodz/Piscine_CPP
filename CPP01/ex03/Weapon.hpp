/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:03:35 by barodrig          #+#    #+#             */
/*   Updated: 2022/05/30 14:05:24 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon(std::string type);
		~Weapon(void);
		void	setType(std::string type);
		std::string	getType(void);
};

#endif