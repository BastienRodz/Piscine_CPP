/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:59:09 by barodrig          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/26 14:59:39 by barodrig         ###   ########.fr       */
=======
/*   Updated: 2022/07/27 14:56:12 by barodrig         ###   ########.fr       */
>>>>>>> 8d7423ca64024776acdb381d6368740a7c9e7e40
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap{
    
<<<<<<< HEAD
    private:
=======
    protected :
>>>>>>> 8d7423ca64024776acdb381d6368740a7c9e7e40
        std::string _name;
        int         _hp;
        int         _ep;
        int         _dmg;

    public :
        ClapTrap( void );
        ClapTrap( std::string const nickname );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap( void );
        ClapTrap & operator=( ClapTrap const & rhs );

        void    attack( const std::string & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

#endif