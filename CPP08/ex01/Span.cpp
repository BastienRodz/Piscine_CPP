#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
	: _range(0)
{
	std::cout << "Span : Default constructor called !" << std::endl;
}

Span::Span( unsigned int n )
	: _range(n)
{
	std::cout << "Span : Constructor called !" << std::endl;
}

Span::Span( const Span & src )
{
	std::cout << "Span : Copy constructor called !" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	std::cout << "Span : Destructor called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_range = rhs.getRange();
		this->_tab.clear();
		this->_tab = rhs.getTab();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber( int const &n )
{
	try
	{
		if ( this->_tab.size() < this->_range )
		{
			this->_tab.push_back(n);
			std::cout << "Number " << n << " added." << std::endl;
		}
		else
			throw CantAddNumber();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan() const
{
	try
	{
		if ( !_tab.size() || _tab.size() == 1 )
			throw SpanError();
		int min = *std::min_element(_tab.begin(), _tab.end());
		int closestMin = *((std::min_element(_tab.begin(), _tab.end()))++);
		return ( closestMin - min );
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
}

unsigned int	Span::longestSpan() const
{
	try
	{
		if ( !_tab.size() || _tab.size() == 1 )
			throw SpanError();
		int min = *std::min_element(_tab.begin(), _tab.end());
		int max = *std::max_element(_tab.begin(), _tab.end());
		return ( max - min );
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
}

void		Span::showSpans() const
{
	std::cout << "The shortest span is " << this->shortestSpan() << "." << std::endl;
	std::cout << "The longest span is " << this->longestSpan() << "." << std::endl;
}

void		Span::addUsingIterator( int const &n )
{
	std::vector<int>::iterator it = _tab.begin();
	std::vector<int>::iterator end = _tab.end();
	while ( it++ != end )
	{
			*it = n;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int> 	Span::getTab( void ) const
{
	return (this->_tab);
}

unsigned int		Span::getRange( void ) const
{
	return (this->_range);
}


/* ************************************************************************** */