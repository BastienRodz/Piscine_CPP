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

class BitcoinExchange {
	
	public:
		BitcoinExchange(const std::string& bitcoinPricesFile);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& other);
		double getExchangeRate(const std::string& date) const;
	
	private:
		std::map<std::string, double>* m_prices;
		void copy(const BitcoinExchange& other);
		void clear();

};

#endif
