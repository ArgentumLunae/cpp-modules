/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 19:42:29 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 20:07:47 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

/*-------- Constructors & Deconstructor --------*/

ScavTrap::ScavTrap(void)
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Parametric name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	std::cout << "ScavTrap: Copy constructer called" << std::endl;
	if (this != &src)
		*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
	return ;
}


/*-------- Assignment operator --------*/

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}


/*-------- Member Functions --------*/

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has not hit points remaining." << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage." << std::endl;
		this->_energyPoints--;
	}
	return ;
}


void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_name << " is now in 'Gate Keeper' mode" << std::endl;
	return ;
}