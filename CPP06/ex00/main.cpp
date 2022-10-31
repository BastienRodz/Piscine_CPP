/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:08:43 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/31 16:48:21 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalar.hpp"

int main(int ac, char **av)
{
    if ( ac != 2 || static_cast<std::string>(av[1]).empty() )
    {
        std::cout << "Please enter C++ literal";
        return (1);
    }
    Scalar *nbr = new Scalar();
    nbr->set_str(static_cast<std::string>(av[1]));
    if (nbr->check_infinity())
        return (0);
    nbr->detect_type();
    delete nbr;
}