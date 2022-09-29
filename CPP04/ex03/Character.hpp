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
		virtual ~Character();
		Character &		operator=( Character const & rhs );

        std::string const & getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

	protected:
		std::string name;
		AMateria	*inventory[SIZE];
		AMateria	*trash[1000];
};

#endif /* ****************************************************** ICHARACTER_H */