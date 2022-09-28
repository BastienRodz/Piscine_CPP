#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define SIZE 4

class Character : public ICharacter
{

	public:

		Character( void );
		Character( std::string nameToGive );
		Character( Character const & src );
		virtual ~Character() {}
		Character &		operator=( Character const & rhs );

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

	protected:
		std::string name;
		AMateria	*inventory[SIZE];
};

#endif /* ****************************************************** ICHARACTER_H */