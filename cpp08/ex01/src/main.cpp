/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 14:41:17 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/10 17:00:42 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdexcept>
#include <algorithm>

#define BIGSIZE 10000
#define RANDCHANGER 300000000

int boundRand(void)
{
	return (std::rand() % RANDCHANGER);
}

int main()
{
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span sp(BIGSIZE);

		for (int i = 0; i < BIGSIZE; i++)
			sp.addNumber(boundRand());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span			sp(BIGSIZE);
		std::list<int>	lst(BIGSIZE);

		std::generate(lst.begin(), lst.end(), boundRand);
		sp.addNumber(lst.begin(), lst.end());
		// sp.addNumber(15);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span sp(10);

		sp.addNumber(12);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}