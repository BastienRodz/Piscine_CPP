#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called." << std::endl;
	for (int i = 0; i < SIZE; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource copy constructor called." << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called." << std::endl;
	for ( int i = 0; i < SIZE; i++ )
	{
		if ( inventory[i]  )
			delete ( inventory[i] );
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for ( int i = 0; i < SIZE ; i++ )
		{
			if (this->inventory[i] != NULL)
					delete(this->inventory[i]);
			if (rhs.inventory[i] != NULL)
				this->inventory[i] = rhs.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	MateriaSource::learnMateria( AMateria *src )
{
	if ( !src || (*src).getType() == "None" )
	{
		std::cout << " Materia_Source : " << std::endl;
		std::cout << "Do you think I am gonna put some air in my pocket ?" << std::endl;
		return ;
	}
	else
	{
		for (int idx = 0; idx < SIZE ; idx++)
		{
			if ( inventory[idx] == NULL)
			{
				inventory[idx] = src;
				std::cout << " Materia_Source : " << std::endl;
				std::cout << "Materia " << src->getType() << " learned at index " << idx << std::endl;
				return ;
			}
		}
		std::cout << "No more storage possibilities in the inventory. I need to burn the one you gave me." << std::endl;
		delete src;
		return ;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < SIZE; i++)
	{
		if (inventory[i] != NULL && inventory[i]->getType() == type)
			return ( inventory[i]->clone() );
	}
	std::cout << "MateriaSource is not able to create " << type << "." << std::endl;
	return ( NULL );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */