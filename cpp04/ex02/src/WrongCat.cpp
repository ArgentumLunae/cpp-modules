/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 20:39:27 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:49:00 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src.type)
{
	std::cout << "WrongCat copy contructor called." << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
	return ;
}


/*-------- Assignment Operator --------*/

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}


/*-------- Member functions --------*/

void	WrongCat::makeSound(void) const
{
	std::cout << "Miauw." << std::endl;
	return ;
}
