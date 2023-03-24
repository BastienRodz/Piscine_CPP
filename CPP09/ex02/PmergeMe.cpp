/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:56:27 by barodrig          #+#    #+#             */
/*   Updated: 2023/03/24 13:35:50 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


// Constructor
PmergeMe::PmergeMe(const std::vector<int>& sequenceVector, const std::list<int>& sequenceList)
    : m_sequenceVector(sequenceVector), m_sequenceList(sequenceList), m_timeVector(0), m_timeList(0) {}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe& other)
    : m_sequenceVector(other.m_sequenceVector), m_sequenceList(other.m_sequenceList),
      m_timeVector(other.m_timeVector), m_timeList(other.m_timeList) {}

// Destructor
PmergeMe::~PmergeMe() {}

// Operators overload
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        m_sequenceVector = other.m_sequenceVector;
        m_sequenceList = other.m_sequenceList;
        m_timeVector = other.m_timeVector;
        m_timeList = other.m_timeList;
    }
    return *this;
}

// Public methods
void PmergeMe::sortSequences()
{
    m_timeVector = 0;
    std::vector<int> tempVector = m_sequenceVector;
    clock_t startTime = clock();
    mergeInsertSort(0, tempVector.size() - 1);
    m_timeVector += clock() - startTime;
    m_timeVector = (double)m_timeVector * 1000000 / (CLOCKS_PER_SEC);
    
    m_timeList = 0;
    std::list<int> tempList = m_sequenceList;
    clock_t startTime2 = clock();
    mergeInsertSort(tempList.begin(), tempList.end());
    m_timeList += clock() - startTime2;
    m_timeList = (double)m_timeList * 1000000 / (CLOCKS_PER_SEC);
}

void PmergeMe::printSequences() const
{
    std::cout << "After sorting with std::vector: ";
    for (std::vector<int>::const_iterator it = m_sequenceVector.begin(); it != m_sequenceVector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "After sorting with std::list: ";
    for (std::list<int>::const_iterator it = m_sequenceList.begin(); it != m_sequenceList.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::printSortingTimes() const
{
    std::cout << std::fixed << std::setprecision(5);

    std::cout << "Time to process a range of " << m_sequenceVector.size() << " elements with std::vector : "
              << m_timeVector << " us" << std::endl;
    std::cout << "Time to process a range of " << m_sequenceList.size() << " elements with std::list : "
              << m_timeList << " us" << std::endl;
}

// Private methods
void PmergeMe::mergeInsertSort(int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeInsertSort(start, mid);
        mergeInsertSort(mid + 1, end);

        std::vector<int> temp;
        temp.reserve(end - start + 1);

        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end)
        {
            if (m_sequenceVector[i] <= m_sequenceVector[j])
                temp.push_back(m_sequenceVector[i++]);
            else
                temp.push_back(m_sequenceVector[j++]);
        }

        while (i <= mid)
            temp.push_back(m_sequenceVector[i++]);

        while (j <= end)
            temp.push_back(m_sequenceVector[j++]);

        for (i = start, j = 0; i <= end; ++i, ++j)
            m_sequenceVector[i] = temp[j];
    }
}

void PmergeMe::mergeInsertSort(std::list<int>::iterator start, std::list<int>::iterator end)
{
    if (start != end)
    {
        std::list<int> temp;
        std::list<int>::iterator mid = start;
        std::list<int>::iterator it = start;
        std::list<int>::iterator it_j = mid;
        ++it;

        while (it != end)
        {
            it++;
            if (it != end)
            {
                it++;
                mid++;
            }
        }

        it = start;
        it_j = mid;
        ++it_j;

        while (it != mid && it_j != end)
        {
            if (*it <= *it_j)
            {
                temp.push_back(*it);
                ++it;
            }
            else
            {
                temp.push_back(*it_j);
                ++it_j;
            }
        }

        while (it != mid)
        {
            temp.push_back(*it);
            ++it;
        }

        while (it_j != end)
        {
            temp.push_back(*it_j);
            ++it_j;
        }

        std::copy(temp.begin(), temp.end(), start);
    }
}
