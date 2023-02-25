#include "Scalar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalar::Scalar()
: _str(), _type(4)
{
}

Scalar::Scalar( const Scalar & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Scalar::~Scalar()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Scalar &				Scalar::operator=( Scalar const & rhs )
{
	this->_str = rhs._str;
	this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	Scalar::check_infinity( void )
{
	std::string checks[8] =
	{ "-inf", "+inf", "inf", "nan", "-inff", "+inff", "inff", "nanf" };
	for ( int i = 0; i < 8 ; i++ )
	{
		if ( this->_str == checks[i] && i >= 4 )
		{
			std::cout << "float: " << checks[i] << std::endl;
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "double: " << checks[i - 4] << std::endl;
			return (TRUE);
		}
		if ( this->_str == checks[i] &&  i < 4 )
		{
			std::cout << "double: " << checks[i] << std::endl;
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << checks[i + 4] << std::endl;
			return (TRUE);
		}
	}
	return (FALSE);
}

void	Scalar::detect_type(  )
{
	bool	(Scalar::*is_type_ptr[4]) (void) = {
		&Scalar::is_char, 
		&Scalar::is_int, 
		&Scalar::is_float, 
		&Scalar::is_double
	};

	void	(Scalar::*print_ptr[4]) (void) = {
		&Scalar::print_char, 
		&Scalar::print_int, 
		&Scalar::print_float, 
		&Scalar::print_double
	};

	for ( int i = 0 ; i < 4 ; i++ )
	{
		if ((this->*is_type_ptr[i])() )
		{
			(this->*print_ptr[i])();
			return ;
		}
	}
	std::cerr << "Sorry, the type used is not handled by the program." << std::endl;
	std::cerr << "Please use a char, an int, a float or a double." << std::endl;
}

bool	Scalar::is_char( void )
{
	if ( static_cast<int>(this->_str.length()) == 1)
	{
		if ( !isdigit(this->_str[0]) )
		{
			this->_type = CHAR;
			return (TRUE);
		}
	}
	return (FALSE);
}

bool	Scalar::is_int( void )
{
	int	i = 0;

	if ( this->_str[i] == '+' || this->_str[i] == '-' )
		i++;
	while ( i < static_cast<int>(this->_str.length() - 1) )
	{
		if ( isdigit(this->_str[i]) )
			i++;
		else
			return (FALSE);
	}
	this->_type = INT;
	return (TRUE);
}

bool 	Scalar::is_float( void )
{
	int	i = 0;
	bool point = FALSE;
	bool f_presence = FALSE;

	if ( this->_str[i] == '+' || this->_str[i] == '-' )
		i++;
	while ( i < static_cast<int>(this->_str.length()) )
	{
		if ( isdigit(this->_str[i]) )
			i++;
		else if ( this->_str[i] == '.' && point == FALSE && f_presence == FALSE)
		{
			point = TRUE;
			i++;
		}
		else if ( this->_str[i] == 'f' && point == TRUE && f_presence == FALSE)
		{
			f_presence = TRUE;
			i++;
		}
		else
			return (FALSE);
	}
	if ( point == TRUE && f_presence == TRUE )
	{
		this->_type = FLOAT;
		return (TRUE);
	}
	return (FALSE);
}

bool 	Scalar::is_double( void )
{
	int	i = 0;
	bool point = FALSE;

	if ( this->_str[i] == '+' || this->_str[i] == '-' )
		i++;
	while ( i < static_cast<int>(this->_str.length()))
	{
		if ( isdigit(this->_str[i]) )
			i++;
		else if ( this->_str[i] == '.' && point == FALSE )
		{
			point = TRUE;
			i++;
		}
		else
			return (FALSE);
	}
	if ( point == TRUE)
	{
		this->_type = DOUBLE;
		return (TRUE);
	}
	return (FALSE);
}

void	Scalar::print_char( void )
{
	double lit = std::strtod(this->_str.c_str(), NULL);
	if (lit > std::numeric_limits<char>::max()
		|| lit < std::numeric_limits<char>::min())
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char litc = std::strtod(this->_str.c_str(), NULL);
	if ((litc >= 0 && litc <= 31) || litc >= 127 || litc < 0 || litc == '0')
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << litc << std::endl;
	if (this->_type == CHAR)
	{
		std::cout << "int: " << static_cast<int>(this->_str[0]) << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(this->_str[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(this->_str[0]) << std::endl;
	}
}

void	Scalar::print_int( void )
{
	double lit = std::strtod(this->_str.c_str(), NULL);
	if ( lit > std::numeric_limits<int>::max()
		|| lit < std::numeric_limits<int>::min() )
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(lit) << std::endl;
	if (this->_type == INT)
	{
		print_char();
		print_float();
		print_double();
	}
}

void	Scalar::print_float( void )
{
	double lit = std::strtod(this->_str.c_str(), NULL);
	if ( lit > std::numeric_limits<double>::max()
		|| lit < -std::numeric_limits<double>::max())
		std::cout << "float: impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(lit) << "f" << std::endl;
	}
	if ( this->_type == FLOAT )
	{
		print_char();
		print_int();
		print_double();
	}
}

void	Scalar::print_double( void )
{
	double lit = strtod(this->_str.c_str(), NULL);
	if ( lit > std::numeric_limits<double>::max()
		|| lit < -std::numeric_limits<double>::max() )
		std::cout << "double: impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double: " << lit << std::endl;
	}
	if ( this->_type == DOUBLE )
	{
		print_char();
		print_int();
		print_float();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void					Scalar::set_str( std::string src )
{
	_str = src;
}

std::string				Scalar::get_str( Scalar *nbr ) const
{
	return(nbr->_str);
}


/* ************************************************************************** */