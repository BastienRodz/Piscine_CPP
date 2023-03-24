/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:09:32 by barodrig          #+#    #+#             */
/*   Updated: 2023/02/25 15:54:55 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& bitcoinPricesFile)
    : m_prices(new std::map<std::string, double>()) 
{
    std::ifstream bitcoinFile(bitcoinPricesFile.c_str());
    if (bitcoinFile.fail())
        throw std::runtime_error("Error: Failed to open BitcoinPrices.csv");
    std::string line;
    std::getline(bitcoinFile, line);
    while (std::getline(bitcoinFile, line)) 
    {
        std::istringstream ss(line);
        std::string dateStr;
        double price;
        std::getline(ss, dateStr, ',');
        ss >> price;
        (*m_prices)[dateStr] = price;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
    : m_prices(new std::map<std::string, double>())
{
    _copy(other);
}

BitcoinExchange::~BitcoinExchange()
{
    _clear();
    delete m_prices;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        _clear();
        _copy(other);
    }
    return *this;
}

double BitcoinExchange::getExchangeRate(const std::string& date) const
{
    if (m_prices->empty())
        throw std::runtime_error("Error: The database is empty");

    std::map<std::string, double>::const_iterator it = m_prices->lower_bound(date);

    if (it == m_prices->begin())
        throw std::runtime_error("Error: No Bitcoin price available for date " + date + " and no earlier date available");
    if (it == m_prices->end() || it->first != date)
        --it;
    return it->second;
}

std::map<std::string, double>* BitcoinExchange::getPrices() const
{
    return m_prices;
}

std::ostream& operator<<(std::ostream& os, const BitcoinExchange& bitcoinExchange)
{
    std::map<std::string, double> prices = *bitcoinExchange.getPrices();
    for (std::map<std::string, double>::const_iterator it = prices.begin();
         it != prices.end(); ++it)
    {
        os << it->first << " | " << it->second << std::endl;
    }
    return os;
}

/* PRIVATE */

void BitcoinExchange::_copy(const BitcoinExchange& other)
{
    *m_prices = *other.m_prices;
}

void BitcoinExchange::_clear()
{
    m_prices->clear();
}

