/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:57:57 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/29 15:31:55 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <cstdlib>

class Brain{
    private :
        std::string _ideas[100];
    public :
        Brain( void );
        Brain( std::string const nickname );
        Brain( Brain const & src );
        ~Brain( void );
        Brain & operator=( Brain const & rhs );
        
        std::string generateRandomWords( int n );
        void	printMind( int n );
};

#endif