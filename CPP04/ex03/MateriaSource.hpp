#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

# define SIZE 4

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();
		MateriaSource &		operator=( MateriaSource const & rhs );

		void	learnMateria( AMateria *src );
		AMateria *createMateria( std::string const & type );


	protected:
		AMateria *inventory[SIZE];
};

#endif /* *************************************************** MATERIASOURCE_H */