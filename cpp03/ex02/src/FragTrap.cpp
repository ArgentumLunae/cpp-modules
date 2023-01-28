/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 20:25:39 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 20:39:19 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

/*-------- Constructors & Deconstructor --------*/

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Parametric name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
	return ;
}

/*-------- Member functions --------*/

void	FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has not hit points remaining." << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy." << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage." << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	FragTrap::highFiveGuys(void) const
{
	std::cout << "Hey good job. Apply a 'High Five' here." << std::endl;
	return ;
}
