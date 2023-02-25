/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:38:34 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/03 10:54:33 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

# define YELLOW "\e[1;33m"
# define RED "\e[1;31m"
# define UCYN "\e[4;36m"
# define STOP "\e[0m"

int main()
{
	std::cout << YELLOW << " + + + + + Stack Test + + + + + " << STOP << std::endl;
	
	{
		MutantStack<int> mstack;

        if (mstack.empty())
			std::cout << RED << "EMPTY" << STOP << std::endl;
    
		mstack.push(42);
		mstack.push(24);
		std::cout << "last element added : " << mstack.top() << std::endl; 
		
		mstack.pop();	// remove last element added
		std::cout << "size after removing last element added (should be 1) : " << mstack.size() << std::endl;
		
		mstack.push(1);
		mstack.push(2);
		mstack.push(2147483647);
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << YELLOW << "Stack:" << STOP << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::stack<int> s(mstack);

		it = mstack.begin();
		std::cout << "first element added on the stack : " << *it << std::endl;
		it++;
		std::cout << "second element added on the stack : " << *it << std::endl;

	}


	std::cout << YELLOW << "\n + + + + + List Test + + + + +" << STOP << std::endl;

	{
		std::list<int>	mlist;

		if (mlist.empty())
			std::cout << RED << "EMPTY" << STOP << std::endl;
		
		mlist.push_back(42);
		mlist.push_back(24);
		std::cout << "last element added : " << mlist.back() << std::endl;
		
		mlist.pop_back();	// remove last element added
		std::cout << "size after removing last element added (should be 1) : " << mlist.size() << std::endl;
		
		mlist.push_back(1);
		mlist.push_back(2);
		mlist.push_back(2147483647);
		mlist.push_back(0);
		
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << YELLOW << "List:" << STOP << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		it = mlist.begin();
		std::cout << "first element added on the stack : " << *it << std::endl;
		it++;
		std::cout << "second element added on the stack : " << *it << std::endl;
		
		std::list<int> s(mlist);
	}
	
	return (0);
}