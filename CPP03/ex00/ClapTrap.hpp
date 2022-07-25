/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:59:09 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/25 19:08:41 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define HP=1
# define EP=2
# define DMG=3

class   ClapTrap{
    private :
        std::string _name;
        int         _hp;
        int         _ep;
        int         _dmg;

    public  :
        ClapTrap( void );
        ClapTrap( std::string nickname );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap( void );
        ClapTrap & operator=(ClapTrap const & rhs);
        
        int     getAttribute(int index);
        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif