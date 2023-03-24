/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:56:20 by barodrig          #+#    #+#             */
/*   Updated: 2023/03/24 11:37:35 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: Please provide a sequence of positive integers as arguments" << std::endl;
        return 1;
    }

    std::vector<int> sequenceVector;
    std::list<int> sequenceList;

    for (int i = 1; i < ac; ++i)
    {
        int num = std::atoi(av[i]);
        if (num <= 0)
        {
            std::cerr << "Error: Only positive integers are allowed" << std::endl;
            return 1;
        }
        sequenceVector.push_back(num);
        sequenceList.push_back(num);
    }

    PmergeMe sorter(sequenceVector, sequenceList);

    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = sequenceVector.begin(); it != sequenceVector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    sorter.sortSequences();
    sorter.printSequences();
    sorter.printSortingTimes();

    return 0;
}
