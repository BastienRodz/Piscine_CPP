/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:56:27 by barodrig          #+#    #+#             */
/*   Updated: 2023/03/24 15:13:45 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


// Constructor
PmergeMe::PmergeMe(const std::vector<int>& sequenceVector, const std::list<int>& sequenceList, clock_t timeDataVector, clock_t timeDataList)
    : m_sequenceVector(sequenceVector), m_sequenceList(sequenceList), m_timeVector(0), m_timeList(0) ,
      m_timeDataVector(timeDataVector), m_timeDataList(timeDataList){}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe& other)
    : m_sequenceVector(other.m_sequenceVector), m_sequenceList(other.m_sequenceList),
      m_timeVector(other.m_timeVector), m_timeList(other.m_timeList), m_timeDataVector(other.m_timeDataVector),
      m_timeDataList(other.m_timeDataList) {}

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
    clock_t startTime2 = clock();
    mergeInsertSort(m_sequenceList.begin(), m_sequenceList.end());
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
    std::cout << "Data management time for std::vector : " << m_timeDataVector << " us" << std::endl;
    std::cout << "Time to process a range of " << m_sequenceList.size() << " elements with std::list : "
              << m_timeList << " us" << std::endl;
    std::cout << "Data management time for std::list : " << m_timeDataList << " us" << std::endl;
}

// Private methods
void PmergeMe::mergeInsertSort(int start, int end)
{
    // If there is more than one element in the range, split it in half and sort each half
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeInsertSort(start, mid);
        mergeInsertSort(mid + 1, end);

        // Create a temporary vector to store the merged elements
        std::vector<int> temp;
        temp.reserve(end - start + 1);

        // Merge the two sorted halves by comparing the elements in each half and adding them to the temporary vector in order
        int i = start;
        int j = mid + 1;
        while (i <= mid && j <= end)
        {
            if (m_sequenceVector[i] <= m_sequenceVector[j])
                temp.push_back(m_sequenceVector[i++]);
            else
                temp.push_back(m_sequenceVector[j++]);
        }

        // Add any remaining elements from the left half to the temporary vector
        while (i <= mid)
            temp.push_back(m_sequenceVector[i++]);

        // Add any remaining elements from the right half to the temporary vector
        while (j <= end)
            temp.push_back(m_sequenceVector[j++]);

        // Copy the sorted elements back into the original vector
        for (i = start, j = 0; i <= end; ++i, ++j)
            m_sequenceVector[i] = temp[j];
    }
}

void PmergeMe::mergeInsertSort(std::list<int>::iterator start, std::list<int>::iterator end)
{
    // If there is only one element or less in the range, it is already sorted
    if (std::distance(start, end) <= 1) {
        return;
    }

    // Find the middle element of the range and split it in half
    std::list<int>::iterator mid = start;
    std::advance(mid, std::distance(start, end) / 2);

    // Recursively sort each half of the range
    mergeInsertSort(start, mid);
    mergeInsertSort(mid, end);

    // Merge the sorted halves by comparing the elements in each half and adding them to a temporary buffer in order
    std::vector<int> temp;
    temp.reserve(std::distance(start, end));
    std::list<int>::iterator left = start;
    std::list<int>::iterator right = mid;
    while (left != mid && right != end) {
        if (*left <= *right) {
            temp.push_back(*left++);
        }
        else {
            temp.push_back(*right++);
        }
    }

    // Add any remaining elements from the left half to the temporary buffer
    while (left != mid) {
        temp.push_back(*left++);
    }

    // Add any remaining elements from the right half to the temporary buffer
    while (right != end) {
        temp.push_back(*right++);
    }

    // Copy the sorted elements from the temporary buffer back into the original list
    std::copy(temp.begin(), temp.end(), start);
}
