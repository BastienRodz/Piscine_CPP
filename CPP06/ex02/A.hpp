/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:38 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/06 11:53:53 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A : public Base
{

	public:

		A();
		A( A const & src );
		~A();

		A &		operator=( A const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, A const & i );

#endif /* *************************************************************** A_H */