/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 17:54:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 18:25:36 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap one("Herold");
	ClapTrap two("Bob");

	one.attack("Bob");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(0);
	one.beRepaired(0);
	two.beRepaired(0);
	one.attack("Bob");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(0);
	one.beRepaired(0);
	two.beRepaired(0);
	one.attack("Bob");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(0);
	one.beRepaired(0);
	two.beRepaired(0);
	one.attack("Bob");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(0);
	one.beRepaired(0);
	two.beRepaired(0);
	one.attack("Bob");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(0);
	one.beRepaired(0);
	two.beRepaired(0);
	one.attack("Bob");
	two.takeDamage(0);
	two.attack("Herold");
	one.takeDamage(0);
	one.beRepaired(0);
	two.beRepaired(0);
	return (0);
}