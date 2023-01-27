/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:34:28 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 16:36:39 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
# include <iostream>

Weapon::Weapon() : _type("Empty Hand")
{
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << this->_type << " constructor called" << std::endl;
	return ;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	std::cout << this->_type << " exchanged for " << type << std::endl;
	this->_type = type;
	return ;
}