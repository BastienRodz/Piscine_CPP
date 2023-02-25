/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:35:39 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/02 19:24:30 by barodrig         ###   ########.fr       */
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
    std::cout << " Result expected = \033[1;31mEXCEPTION : NOTHING TO COMPARE\033[0m" << std::endl;
    Span sp = Span(0);
    sp.showSpans();
}

void    test3()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_3 = NOTHING TO COMPARE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mEXCEPTION : NOTHING TO COMPARE\033[0m" << std::endl;
    Span sp = Span(1);
    srand(time(NULL) + getpid() - clock());
    for ( int i = 0; i < 1; i++)
        sp.addNumber(rand());
    sp.showSpans();
}

void    test4()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_4 = NOTHING TO COMPARE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;32mSHOULD WORK FINE\033[0m" << std::endl;
    Span sp = Span(2);
    sp.addNumber(1);
    sp.addNumber(11);
    sp.showSpans();
}

void    test5()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_5 = FILLING SPAN USING ITERATORS + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;32mIT SHOULD WORK FINE\033[0m" << std::endl;
    Span sp = Span(2);
    sp.addUsingIterator();
    sp.showSpans();
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
        std::cout << std::endl;
        test4();
        std::cout << std::endl;
        test5();
    }
}