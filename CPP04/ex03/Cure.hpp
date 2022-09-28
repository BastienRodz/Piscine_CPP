#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria
{

	public:
		Cure();
		Cure( Cure const & src );
		~Cure();
		Cure &		operator=( Cure const & rhs );

		virtual AMateria* clone() const;
        virtual void use(ICharacter& target);

};


#endif /* ************************************************************ CURE_H */