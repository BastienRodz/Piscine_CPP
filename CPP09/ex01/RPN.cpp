/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:29:30 by barodrig          #+#    #+#             */
/*   Updated: 2023/03/02 16:31:20 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/** PUBLIC */

RPN::RPN( std::string *expression ) : _expression(*expression)
{
    return ;
}

RPN::RPN( const RPN& other )
{
    *this = other;
    return ;
}

RPN::~RPN()
{
    _clear();
    return ;
}

RPN& RPN::operator=( const RPN& other )
{
    _clear();
    _copy(other);
    return *this;
}

int RPN::calculate( void ) const
{
    std::stack<int> operands;

    std::stringstream ss(_expression);
    std::string token;
    while (ss >> token) {
        if (isdigit(token[0])) {
            int operand = atoi(token.c_str());
            if (operand >= 10)
            {
                // we break it down into two digits
                int first = operand / 10;
                int second = operand % 10;
                operands.push(first);
                operands.push(second);
            }
            if (operand < 10)
                operands.push(operand);
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (operands.size() < 2) {
                throw std::runtime_error("Error: Not enough operands for operator " + token);
            }
            int rhs = operands.top();
            operands.pop();
            int lhs = operands.top();
            operands.pop();
            int result;
            if (token == "+")
                result = lhs + rhs;
            else if (token == "-")
                result = lhs - rhs;
            else if (token == "*")
                result = lhs * rhs;
            else if (token == "/") 
            {
                if (rhs == 0)
                    throw std::runtime_error("Error: Division by zero");
                result = lhs / rhs;
            } 
            else
                throw std::runtime_error("Error: Invalid operator " + token);
            operands.push(result);
        } 
        else
            throw std::runtime_error("Error: Invalid token " + token);
    }
    if (operands.size() != 1)
        throw std::runtime_error("Error: Not enough operands");
    return operands.top();
}

/** PRIVATE */

void RPN::_copy( const RPN& other )
{
    if (this != &other)
    {
        this->_expression = other._expression;
    }
    return ;
}

void RPN::_clear( void )
{
    return ;
}