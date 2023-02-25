#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <ctime>
# include <string>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>
# include <unistd.h>
# include <numeric>
# include <limits>

# define MAX 10000

class Span
{
	private:
		std::vector<int>	_tab;
		unsigned int		_range;
		unsigned int		_added;

	public:
		Span();
		Span( unsigned int n );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		std::vector<int> 		getTab() const;
		unsigned int			getRange() const;

		void			addNumber( int const &n );
		int				shortestSpan() const;
		int				longestSpan() const;
		void			showSpans() const;
		void			addUsingIterator();

		class CantAddNumber : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("\033[1;31m[Span Exception] : The table is full, please go away !\033[0m");
			}
		};

		class SpanError : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("\033[1;31m[Span Exception] : Not enough numbers in tab to make any comparison !\033[0m");
			}
		};
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */