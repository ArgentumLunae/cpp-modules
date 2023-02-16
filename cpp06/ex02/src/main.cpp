/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 21:28:18 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 12:59:13 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>

Base *generate(void)
{
	int i = std::rand()%3;

	if (i == 0)
		return (new A);
	if (i == 1)
		return (new B);
	if (i == 2)
		return (new C);
	return (NULL);
}

void identify(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "*A" << std::endl;
	else if (b != NULL)
		std::cout << "*B" << std::endl;
	else if (c != NULL)
		std::cout << "*C" << std::endl;
	else
		std::cout << "Error: dynamic cast" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "&A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{}
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "&B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{}
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "&C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}

int	main(void)
{
	Base	*p;

	for (int i = 0; i < 100; i++)
	{
		std::cout << "cycle " << i + 1 << std::endl;
		p = generate();
		identify(p);
		identify(*p);
		delete p;
		std::cout << std::endl;
	}
	std::cout << "incorrect" << std::endl;
	p = NULL;
	identify(p);
	identify(*p);
	return (0);
}