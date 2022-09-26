/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:12:22 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 11:14:32 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "iomanip"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap (std::string name);
        FragTrap(const FragTrap & rhs);
        ~FragTrap( void );
        FragTrap &  operator=(const FragTrap & rhs);
        void    highFiceGuys( void );
        void	attack( const std::string & target );
};

#endif