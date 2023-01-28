/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 17:54:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 20:37:12 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap one("Herold");
	ScavTrap two("Bob");
	FragTrap three("Bartholomew Chunges Gingersnap III");

	one.attack("Charles");
	one.takeDamage(0);
	one.beRepaired(15);
	two.attack("Tiberius");
	two.takeDamage(20);
	two.beRepaired(15);
	two.guardGate();
	three.attack("charlie");
	three.takeDamage(150);
	three.beRepaired(15);
	three.highFiveGuys();
	return (0);
}