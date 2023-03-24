/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:51:14 by barodrig          #+#    #+#             */
/*   Updated: 2023/02/25 15:08:37 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <map>
# include <stdexcept>
# include <fstream>
# include <sstream>
# include <iostream>
# include <cctype>
# include <limits>

class BitcoinExchange {
	
	public:
		BitcoinExchange(const std::string& bitcoinPricesFile);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& other);
		double getExchangeRate(const std::string& date) const;
		std::map<std::string, double>* getPrices() const;
	
	private:
		std::map<std::string, double>* m_prices;
		void _copy(const BitcoinExchange& other);
		void _clear();

};

std::ostream& operator<<(std::ostream& os, const BitcoinExchange& bitcoinExchange);

#endif
