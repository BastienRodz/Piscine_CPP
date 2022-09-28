#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define SIZE 4

class Character : public ICharacter
{

	public:

		Character();
		Character( Character const & src );
		virtual ~Character() {}
		Character &		operator=( Character const & rhs );

        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;

	protected:
		std::string name;
		AMateria	*inventory[SIZE];


};

#endif /* ****************************************************** ICHARACTER_H */