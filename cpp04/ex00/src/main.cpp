/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 16:04:26 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:52:20 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	{
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
	}
	std::cout << std::endl;
	{
		const WrongAnimal	*offmeta = new WrongAnimal();
		const WrongAnimal	*catfish = new WrongCat();

		std::cout << catfish->getType() << std::endl;
		catfish->makeSound();
		offmeta->makeSound();
	}
	return (0);
}