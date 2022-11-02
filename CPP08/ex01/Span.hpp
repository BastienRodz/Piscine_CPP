#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>

# define MAX 10000

class Span
{
	private:
		std::vector<int>	_tab;
		unsigned int		_range;

	public:
		Span();
		Span( unsigned int n );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		std::vector<int> 		getTab() const;
		unsigned int			getRange() const;

		void			addNumber( int const &n );
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			showSpans() const;
		void			addUsingIterator( int const &n );

		class CantAddNumber : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("[Span] : The table is full, please go away !");
			}
		};

		class SpanError : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("[Span] : Not enough numbers in tab to make any !");
			}
		};
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */