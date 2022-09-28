/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:14:25 by barodrig          #+#    #+#             */
/*   Updated: 2022/09/28 11:18:51 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria( std::string const & type );
        AMateria( void );
        virtual ~AMateria( void );
        AMateria( AMateria const & src );
        AMateria & operator=( AMateria const & rhs );
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};