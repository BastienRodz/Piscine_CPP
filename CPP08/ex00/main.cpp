/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:23:15 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/02 15:41:22 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <stack>
#include <deque>
#include <list>

void    test1()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_1 = VECTOR + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;32mFOUND\033[0m" << std::endl;
    const int n = 10;
    int tab[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> vector(tab, tab + n);
    printer(vector);
    easyfind(vector, 9);
    std::cout << std::endl;
}

void    test2()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_2 = DEQUE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;32mFOUND\033[0m" << std::endl;
    const int n = 10;
    int tab[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::deque<int> deque;
    for (int i = 0; i < 10 ; i++)
        deque.push_back(tab[i]);
    printer(deque);
    easyfind(deque, 0);
    std::cout << std::endl;
}

void    test3()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_3 = LIST + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;32mFOUND\033[0m" << std::endl;
    const int n = 10;
    int tab[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> list;
    for (int i = 0; i < 10 ; i++)
        list.push_back(tab[i]);
    printer(list);
    easyfind(list, 5);
    std::cout << std::endl;
}

void    test4()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_4 = VECTOR NOT FOUND + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mNOT FOUND\033[0m" << std::endl;
    const int n = 10;
    int tab[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> vector(tab, tab + n);
    printer(vector);
    easyfind(vector, 11);
    std::cout << std::endl;
}

void    test5()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_5 = DEQUE NOT FOUND + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mNOT FOUND\033[0m" << std::endl;
    const int n = 10;
    int tab[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::deque<int> deque;
    for (int i = 0; i < 10 ; i++)
        deque.push_back(tab[i]);
    printer(deque);
    easyfind(deque, -9);
    std::cout << std::endl;
}

void    test6()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_6 = LIST NOT FOUND + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mNOT FOUND\033[0m" << std::endl;
    const int n = 10;
    int tab[n] = {0, 1, 2, 3, 4, 10, 6, 7, 8, 9};
    std::list<int> list;
    for (int i = 0; i < 10 ; i++)
        list.push_back(tab[i]);
    printer(list);
    easyfind(list, 5);
    std::cout << std::endl;
}

void    test7()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_7 = EMPTY VECTOR + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mNOT FOUND\033[0m" << std::endl;
    std::vector<int> list;
    printer(list);
    easyfind(list, 5);
    std::cout << std::endl;
}

void    test8()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_8 = EMPTY DEQUE + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mNOT FOUND\033[0m" << std::endl;
    std::deque<int> deque;
    printer(deque);
    easyfind(deque, 5);
    std::cout << std::endl;
}

void    test9()
{
    std::cout << "\033[1;33m+ + + + + + + + + TEST_9 = EMPTY LIST + + + + + + + + +\033[0m" << std::endl;
    std::cout << " Result expected = \033[1;31mNOT FOUND\033[0m" << std::endl;
    std::list<int> list;;
    printer(list);
    easyfind(list, 5);
    std::cout << std::endl;
}


int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();   
    test8();
    test9();
}