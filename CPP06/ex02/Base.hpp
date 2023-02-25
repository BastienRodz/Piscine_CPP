/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:26 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/31 18:22:07 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{
	public:
		A(){std::cout << "Class A constructed" << std::endl;}
};

class B : public Base
{
	public:
		B(){std::cout << "Class B constructed" << std::endl;}
};

class C : public Base
{
	public:
		C(){std::cout << "Class C constructed" << std::endl;}
};

Base 	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif /* ************************************************************ BASE_H */