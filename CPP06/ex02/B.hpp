/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:31 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/06 11:54:01 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B : public Base
{

	public:

		B();
		B( B const & src );
		~B();

		B &		operator=( B const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, B const & i );

#endif /* *************************************************************** B_H */