/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:35:39 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/02 16:17:48 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    test1()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_1 = NOT ENOUGH SPACE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mEXCEPTION : NOT ENOUGH SPACE\033[0m" << std::endl;
    Span sp = Span(5);
    for ( int i = 0; i < 7; i++)
        sp.addNumber(10);
}

void    test2()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_2 = NOTHING TO COMPARE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mEXCEPTION : NOTHING TO COMPATE\033[0m" << std::endl;
    Span sp = Span(0);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void    test3()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_3 = NOTHING TO COMPARE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mEXCEPTION : NOTHING TO COMPATE\033[0m" << std::endl;
    Span sp = Span(1);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main( void )
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << std::endl;
        test1();
        std::cout << std::endl;
        test2();
        std::cout << std::endl;
        test3();
    }
}