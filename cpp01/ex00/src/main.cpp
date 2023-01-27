/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 12:31:11 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 14:47:22 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *steven;

	steven = newZombie("Steven");
	randomChump("Barty");
	steven->announce();
	delete steven;
	return (0);
}