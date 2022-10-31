/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:26 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/06 11:57:06 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{

	public:

		Base();
		Base( Base const & src );
		virtual ~Base();

		Base &		operator=( Base const & rhs );
		
		virtual Base 	*generate(void) = 0;
		virtual void	identify(Base* p) = 0;
		virtual void	identify(Base& p) = 0;

	private:

};

std::ostream &			operator<<( std::ostream & o, Base const & i );

#endif /* ************************************************************ BASE_H */