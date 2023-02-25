#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <cstdlib>

# define CHAR 0
# define INT  1
# define FLOAT 2
# define DOUBLE 3

# define TRUE 1
# define FALSE 0

class Scalar
{
	private:
		std::string	_str;
		int			_type;

	public:
		Scalar();
		Scalar( Scalar const & src );
		~Scalar();

		Scalar &		operator=( Scalar const & rhs );

		void		set_str(std::string src);
		std::string	get_str( Scalar *nbr ) const;

		void	detect_type( void );

		bool	check_infinity( void );
		bool	is_char( void );
		bool	is_int( void );
		bool	is_float( void );
		bool	is_double( void );

		void	print_char( void );
		void	print_int( void );
		void	print_float( void );
		void	print_double( void );
};

#endif /* ********************************************************** SCALAR_H */