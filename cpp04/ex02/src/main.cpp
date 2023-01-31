/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 16:04:26 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:56:08 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AbsAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

#define PENSIZE 4

int main()
{
	const AbsAnimal	*pen[PENSIZE];

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