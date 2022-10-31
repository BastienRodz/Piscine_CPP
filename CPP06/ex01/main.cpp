/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:08:43 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/31 17:12:26 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return ( reinterpret_cast <uintptr_t> (ptr) );
}

Data* deserialize(uintptr_t raw)
{
    return ( reinterpret_cast <Data *> (raw) );
}

int main( void )
{
    Data     test;
    Data     *test_ptr = &test;
    uintptr_t test_uint = 0;

    test_ptr->something = 1;
    std::cout << "test_ptr ADDRESS POINTED BEFORE = " << test_ptr << std::endl;
    std::cout << "test_ptr->something BEFORE = " << test_ptr->something << std::endl << std::endl;
    
    std::cout << "test_uint ADDRESS POINTED BEFORE = " << test_uint << std::endl;
    std::cout << "Serializing it from test_ptr..." << std::endl;
    test_uint = serialize(test_ptr);
    std::cout << "test_uint ADRESS POINTED AFTER = " << test_uint << std::endl << std::endl;
    
    std::cout << "Deserializing test_uint and attributing the result to test_ptr ..." << std::endl;
    test_ptr = deserialize(test_uint);
    std::cout << "test_ptr ADRESS POINTED AFTER = " << test_ptr << std::endl;
    std::cout << "test_ptr->something AFTER = " << test_ptr->something << std::endl;
}