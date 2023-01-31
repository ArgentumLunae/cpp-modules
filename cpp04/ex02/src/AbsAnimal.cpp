/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AbsAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:19:09 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:48:22 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AbsAnimal.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/

AbsAnimal::AbsAnimal()
{
}

AbsAnimal::AbsAnimal(std::string type) : type(type)
{
	std::cout << "Animal parametric constructor called." << std::endl;
	return ;
}

AbsAnimal::AbsAnimal(const AbsAnimal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
	return ;
}

AbsAnimal::~AbsAnimal()
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

/*-------- Assignment Operator --------*/

AbsAnimal & AbsAnimal::operator=(const AbsAnimal &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

/*-------- Member functions --------*/

std::string	AbsAnimal::getType(void) const
{
	return (this->type);
}
