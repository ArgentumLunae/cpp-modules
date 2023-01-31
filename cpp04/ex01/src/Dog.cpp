/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:51:46 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:37:10 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/
Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called." << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : Animal(src.type), _brain(new Brain())
{
	std::cout << "Dog copy contructor called." << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
	return ;
}


/*-------- Assignment Operator --------*/

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}


/*-------- Member functions --------*/

void	Dog::makeSound(void) const
{
	std::cout << "Woef." << std::endl;
	return ;
}