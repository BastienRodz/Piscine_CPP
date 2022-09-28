#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( void ) : name("Joey")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		inventory[i] = NULL;
}

Character::Character( std::string nameToGive ) : name(nameToGive)
{
	std::cout << "Character" << this->getName() << " constructor called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	std::cout << "Character" << this->getName() << " constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Character" << this->getName() << " destructor called" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (inventory[i])
			delete (inventory[i]);
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
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

void	Character::equip( AMateria *m )
{
	if ( !m || (*m).getType() == "None" )
	{
		std::cout << this->getName() << " : " << std::endl;
		std::cout << "Are you crazy ?! Do you wants me to fight with my bare hands ??" << std::endl;
		return ;
	}
	else
	{
		for (int idx = 0; idx < SIZE ; idx++)
		{
			if ( inventory[idx] == NULL)
			{
				inventory[idx] = m;
				std::cout << this->getName() << " : " << std::endl;
				std::cout << "Materia " << m->getType() << " equipped at index " << idx << std::endl;
				return ;
			}
		}
		std::cout << "No more storage possibilities in the inventory. Unequip something first." << std::endl;
		return ;
	}
}

void	Character::unequip( int idx )
{
	if ( idx < 0 || idx >= SIZE )
	{
		std::cout << this->getName() << " : " << std::endl;
		std::cout << "Sorry, this index does not exist. Please enter a number from 0 to 3." << std::endl;
		return ;
	}
	else
	{
		std::cout << this->getName() << " : " << std::endl;
		std::cout << "Sorry, nothing to unequip here" << std::endl;
		return ;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if ( idx < 0 || idx >= SIZE )
	{
		std::cout << this->getName() << " : " << std::endl;
		std::cout << "Sorry, this index does not exist. Please enter a number from 0 to 3." << std::endl;
		return ;
	}
	else if (inventory[idx] != NULL)
	{
		std::cout << this->getName() << " : " << std::endl;
		inventory[idx]->use(target);
	}
	else
	{
		std::cout << this->getName() << " : " << std::endl;
		std::cout << "Sorry, nothing to use here" << std::endl;
		return ;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return (this->name);
}

/* ************************************************************************** */