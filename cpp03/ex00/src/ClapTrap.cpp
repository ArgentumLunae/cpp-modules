/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 17:38:28 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 18:23:39 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parametric name constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructer called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


/*-------- Assignment operator --------*/

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	if	(this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}


/*-------- Member Functions --------*/

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage." << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << ammount << " points of damage." << std::endl;
		this->_hitPoints -= ammount;
		if (this->_hitPoints <= 0)
			std::cout << "ClapTrap " << this->_name << " has fainted." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has not hit points remaining." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	if (this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " is repaired and recovered " << ammount << " hit points" << std::endl;
		this->_hitPoints += ammount;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
	return ;
}