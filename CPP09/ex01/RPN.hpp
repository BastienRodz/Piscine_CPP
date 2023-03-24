/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:29:05 by barodrig          #+#    #+#             */
/*   Updated: 2023/02/25 16:41:35 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <stdexcept>
# include <cstdlib>

class RPN {
	public:
		RPN( std::string expression );
		RPN( const RPN& other );
		~RPN();
		RPN& operator=( const RPN& other );
		int calculate( void ) const;

	private:
		std::string _expression;
		void _copy( const RPN& other );
		void _clear( void );

};

#endif