/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:20 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/06 11:54:11 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C : public Base
{

	public:

		C();
		C( C const & src );
		~C();

		C &		operator=( C const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, C const & i );

#endif /* *************************************************************** C_H */