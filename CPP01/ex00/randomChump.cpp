/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:48:58 by barodrig          #+#    #+#             */
/*   Updated: 2022/07/06 13:30:01 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Here the allocation is made on the stack, so it will be destroyed at the end of the function.
// The reason it has been allocated on the stack is because it is only used here and not in the main function.
// We don't need to access it later.

void Zombie::randomChump(std::string name)
{
	Zombie z = Zombie(name);
	z.announce();
	return ;
}
