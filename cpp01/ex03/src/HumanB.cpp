/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:34:25 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 16:40:10 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : _name("HumanB-default")
{
	std::cout << this->_name << "'s constructor has been called" << std::endl;
	return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << this->_name << "'s constructor has been called" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << this->_name << "'s destructor has been called" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}
