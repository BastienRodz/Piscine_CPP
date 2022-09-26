/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:28:40 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/26 16:01:38 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        std::cout << "\n -- Subject tests --\n";
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
    }
    {
        std::cout << "\n\n -- Test with WrongAnimal and WrongCat --\n";
        const WrongAnimal* meta_bis = new WrongAnimal();
        const WrongAnimal* k = new WrongCat();
        std::cout << k->getType() << " " << std::endl;
        k->makeSound();
        meta_bis->makeSound();
    }
    return (0);
}