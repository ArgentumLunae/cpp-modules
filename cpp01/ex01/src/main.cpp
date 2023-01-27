/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 12:31:11 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 15:23:23 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*steven;
	int		hordeSize = 10;

	steven = zombieHorde(hordeSize, "Steven");
	for (int i = 0; i < hordeSize; i++)
		steven[i].announce();
	delete [] steven;
	return (0);
}