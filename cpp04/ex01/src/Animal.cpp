/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:19:09 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:39:46 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/

Animal::Animal() : type("Base Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal parametric constructor called." << std::endl;
	return ;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

/*-------- Assignment Operator --------*/

Animal & Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

/*-------- Member functions --------*/

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Base Animal, no specifc sound available." << std::endl;
	return ;
}
