/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 12:20:38 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/17 15:53:55 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default")
{
	std::cout << this->_name << " constructor called" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " constructor called" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destructor called" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}