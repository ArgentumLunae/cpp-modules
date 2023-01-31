/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 20:39:19 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:41:29 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/

WrongAnimal::WrongAnimal() : type("Base WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal parametric constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
	return ;
}

/*-------- Assignment Operator --------*/

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

/*-------- Member functions --------*/

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Base WrongAnimal, no specifc sound available." << std::endl;
	return ;
}
