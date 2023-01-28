/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 17:54:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 20:09:09 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap one("Herold");
	ScavTrap two("Bob");

	one.attack("Herold");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(20);
	return (0);
}