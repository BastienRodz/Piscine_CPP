/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:19:42 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/29 16:22:27 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
   const Animal* i = new Cat();
    Cat *k = new Cat();
    Cat *l = new Cat();

    std::cout << " --- K ideas --- " << std::endl;
    k->printBrain(10);
    std::cout << " --- L ideas --- " << std::endl;
    l->printBrain(10);
    std::cout << " ---  NOW L = K --- " << std::endl;
    *l = *k;
    std::cout << " --- L ideas --- " << std::endl;
    l->printBrain(10);

    std::cout << " --- COPY CONSTRUCT M FROM L --- " << std::endl;
    Cat* m = new Cat(*l);

    delete j;//should not create a leak
    delete i;
    delete k;
    delete l;
    delete m;

    return (0);
}