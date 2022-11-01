/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:01:59 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/01 16:20:02 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	float float_tab[5] = {10.0f, 1.0f, 20.0f, 42.42f, 24.24f};
	int int_tab[5] = {10, 8, 6, 4, 2};
	const char char_tab[5] = "test";

	std::cout << " FLOAT tab " << std::endl;
	::iter(float_tab, sizeof(float_tab) / sizeof(int), &print);
	std::cout << " INT tab " << std::endl;
	::iter(int_tab, sizeof(int_tab) / sizeof(int), &print);
	std::cout << " CHAR tab " << std::endl;
	::iter(char_tab, strlen(char_tab), &print);
}