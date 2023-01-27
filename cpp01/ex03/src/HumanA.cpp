/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:34:26 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 16:38:56 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << this->_name << "'s constructor has been called" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << this->_name << "'s destructor has been called" << std::endl;
	return ;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}