/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 13:50:29 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 14:47:22 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump(name);

	chump.announce();
	return ;
}
