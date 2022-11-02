/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:23:15 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/02 09:34:38 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

void test1()
{
    std::cout <<  "\033[1m\033[35m VECTOR TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m FOUND\033[0m\033[37m" << std::endl;
    const int N = 5;
    int a[N] = {1, 4, 7, 3};
    std::vector<int> vec(a, a + N);
    printer(vec);
    easyfind(vec, 7);
    std::cout << std::endl;

}

void test2()
{
   std::cout <<  "\033[0m\033[34m NOT FOUND\033[0m\033[37m" << std::endl;
    const int N = 5;
    int a[N] = {1, 4, 7, 3};
    std::vector<int> vec(a, a + N);
    printer(vec);
    easyfind(vec, 8);

    std::cout << std::endl;
}

void test3()
{
   std::cout <<  "\033[0m\033[34m EMPTY VECTOR \033[0m\033[37m" << std::endl;
    std::vector<int> vec;
    printer(vec);
    easyfind(vec, 8);

}

void test4()
{
    std::cout <<  "\033[1m\033[35m DEQUE TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m DEQUE FOUND \033[0m\033[37m" << std::endl;

    std::deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    printer(dq);
    easyfind(dq, 3);
}

void test5()
{
    std::cout <<  "\033[1m\033[35m DEQUE TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m DEQUE NOT FOUND \033[0m\033[37m" << std::endl;

    std::deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.pop_back();
    dq.pop_back();
    printer(dq);
    easyfind(dq, 3);
}

void test6()
{
    std::cout <<  "\033[1m\033[35m DEQUE TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m EMPTY DEQUE \033[0m\033[37m" << std::endl;

    std::deque<int> dq;
  
    printer(dq);
    easyfind(dq, 3);
}

void test7()
{
    std::cout <<  "\033[1m\033[35m LIST TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m LIST FOUND \033[0m\033[37m" << std::endl;

    std::list<int> list;
    for (int i = 0; i < 5; ++i)
        list.push_back(i * 2);
    printer(list);
    easyfind(list, 2);
}

void test8()
{
    std::cout <<  "\033[1m\033[35m DEQUE TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m LIST NOT FOUND \033[0m\033[37m" << std::endl;

   std::list<int> list;
    for (int i = 0; i < 5; ++i)
        list.push_back(i * 2);
    printer(list);
    easyfind(list, 3);
}

void test9()
{
    std::cout <<  "\033[1m\033[35m DEQUE TESTS" << std::endl << std::endl;
   std::cout <<  "\033[0m\033[34m EMPTY LIST \033[0m\033[37m" << std::endl;

   std::list<int> list;
    printer(list);
    easyfind(list, 2);
}

int main()
{
   test1();
//    test2();
//    test3();
//    test4();
//    test5();
//    test6();
//    test7();
//    test8();
//    test9();
}