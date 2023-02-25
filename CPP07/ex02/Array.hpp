/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:54:25 by barodrig          #+#    #+#             */
/*   Updated: 2022/11/01 14:11:55 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{

	public:

		Array(): _size(0), _content(NULL){};
		Array(const unsigned int n) : _size(n), _content(new T[n]) {};
		Array( Array const & src ) : _size(0), _content(NULL) {
			*this = src;
		};
		~Array(){
			if (_size > 0)
				delete[] _content;
			};

		Array &		operator=( Array const & rhs )
		{
			if (_size > 0)
				delete[] _content;
			_content = new T[rhs._size];
			_size = rhs._size;
			for (int i = 0; static_cast<unsigned int>(i) < _size; i++)
			{
				_content[i] = rhs._content[i];
			}
			return (*this);
		};

		T &		operator[]( const int i ) const
		{
			if ( i < 0 )
				throw InvalidIndexTooLow();
			else if (static_cast<unsigned int>(i) >= _size)
				throw InvalidIndexTooHigh();
			else
				return (_content[i]);
		};

		unsigned int	size( void ) const { return (_size); };

		class InvalidIndexTooLow : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array: This index is too low.\n");
				}
		};

		class InvalidIndexTooHigh : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array: This index is too high.\n");
				}
		};

	private:
		unsigned int	_size;
		T				*_content;
};

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & array )
{
	unsigned int	max = 5;

	o << "[" << array.size() << "] ";
	for (unsigned int i = 0; i < array.size() && i < max; i++)
		o << array[i] << " ";
	if (max < array.size())
		o << "...";
	o << std::endl;
	return (o);
};

#endif /* *********************************************************** ARRAY_H */