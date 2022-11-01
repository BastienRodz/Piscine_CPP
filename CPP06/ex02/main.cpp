/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:06 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/01 14:52:31 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    *generate(void)
{
    srand(time(NULL));
    int i = (rand() % 3) + 1;

    if ( i == 1 )
        return ( new A() );
    else if ( i == 2 )
        return ( new B() );
    else
        return ( new C() );
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "True type is A." << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "True type is B." << std::endl;
    else
        std::cout << "True type is C." << std::endl;
}

void    identify(Base &p)
{
    try{
        (void)dynamic_cast<A &>(p);
        std::cout << "True type is A." << std::endl;
    }
    catch (const std::exception &e){}
    
    try{
        (void)dynamic_cast<B &>(p);
        std::cout << "True type is B." << std::endl;
    }
    catch (const std::exception &e){}
    
    try{
        (void)dynamic_cast<C &>(p);
        std::cout << "True type is C." << std::endl;
    }
    catch (const std::exception &e){}
}   

int     main(void)
{
    
    std::cout << "POINTER TEST" << std::endl;
    Base *_base;

    _base = generate();
    identify(_base);
    std::cout << "\nREF TEST" << std::endl;
    delete _base;
    _base = generate();
    identify(*_base);
    delete _base;
}