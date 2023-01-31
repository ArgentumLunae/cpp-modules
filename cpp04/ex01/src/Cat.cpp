/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:51:13 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:36:58 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/
Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : Animal(src.type), _brain(new Brain)
{
	std::cout << "Cat copy contructor called." << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
	return ;
}


/*-------- Assignment Operator --------*/

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}


/*-------- Member functions --------*/

void	Cat::makeSound(void) const
{
	std::cout << "Miauw." << std::endl;
	return ;
}
