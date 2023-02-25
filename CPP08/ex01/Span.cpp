#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
	: _range(0), _added(0)
{
	std::cout << "Span : Default constructor called !" << std::endl;
}

Span::Span( unsigned int n )
	: _range(n), _added(0)
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
		if ( _added < this->_range )
		{
			this->_tab.push_back(n);
			_added++;
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

void		Span::addUsingIterator( void )
{
	std::vector<int>::iterator it = _tab.begin();
	int	arr[this->_range];
	srand(time(NULL) + clock() + getpid());
	for (unsigned int i = 0; i < this->_range; i++)
		arr[i] = rand();
	try
	{
		if ( _added <= this->_range)
		{
			_tab.insert(_tab.begin(), arr, (arr + (this->_range)));
			it = _tab.begin();
			_added += _range;
		}
		else
			throw CantAddNumber();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	Span::shortestSpan() const
{
	try
	{
		if  ( _added <= 1 )
			throw SpanError(); 
		std::vector<int> 	tmp = _tab;
		unsigned int		span = std::numeric_limits<unsigned int>::max();

		sort(tmp.begin(), tmp.end());
		for (unsigned int i = 0; i < tmp.size() - 1; i++)
		{
			if ( (unsigned int)(tmp[i + 1] - tmp[i]) < span )
				span = (unsigned int)(tmp[i + 1] - tmp[i]);
		}
		return (span);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

int	Span::longestSpan() const
{
	try
	{
		if  ( _added <= 1 )
			throw SpanError();
		std::vector<int>::const_iterator min = std::min_element(_tab.begin(), _tab.end());
		std::vector<int>::const_iterator max = std::max_element(_tab.begin(), _tab.end());
		return ( *max - *min );
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

void		Span::showSpans() const
{
	std::cout << "The shortest span is " << this->shortestSpan() << "." << std::endl;
	std::cout << "The longest span is " << this->longestSpan() << "." << std::endl;
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