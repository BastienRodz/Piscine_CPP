/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:19:34 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/27 15:02:21 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include "iomanip"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap (std::string name);
        ScavTrap(const ScavTrap & rhs);
        ~ScavTrap( void );
        ScavTrap &  operator=(const ScavTrap & rhs);
        void    guardGate( void );
};

#endif