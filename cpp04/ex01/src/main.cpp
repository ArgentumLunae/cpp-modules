/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 16:04:26 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:34:44 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define PENSIZE 4

int main()
{
	const Animal	*pen[PENSIZE];

	for (int i = 0; i < PENSIZE; i++)
	{
		if (i % 2)
			pen[i] = new Dog();
		else
			pen[i] = new Cat();
	}
	for (int i = 0; i < PENSIZE; i++)
	{
		std::cout << pen[i]->getType() << std::endl;
		pen[i]->makeSound();
	}	
	for (int i = 0; i < PENSIZE; i++)
		delete pen[i];
	return (0);
}