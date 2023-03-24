/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:15:22 by barodrig          #+#    #+#             */
/*   Updated: 2023/03/24 15:09:00 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <string>
#include <cstdlib>
#include <iomanip>

class PmergeMe
{
    public:
        PmergeMe(const std::vector<int>& sequenceVector, const std::list<int>& sequenceList, clock_t timeDataVector, clock_t timeDataList);
        PmergeMe(const PmergeMe& other);
        ~PmergeMe();

        PmergeMe& operator=(const PmergeMe& other);

        void sortSequences();
        void printSequences() const;
        void printSortingTimes() const;

    private:
        void mergeInsertSort(int start, int end);
        void mergeInsertSort(std::list<int>::iterator start, std::list<int>::iterator end);

        std::vector<int> m_sequenceVector;
        std::list<int> m_sequenceList;
        clock_t m_timeVector;
        clock_t m_timeList;
        clock_t m_timeDataVector;
        clock_t m_timeDataList;
};

#endif
