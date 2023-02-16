/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 14:14:42 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 14:43:45 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "itter.hpp"
#include <iostream>

void	intfunc(int &i)
{
	i += 2;
}

void	floatfunc(float &f)
{
	f *= 6.6;
}

void	charfunc(char &c)
{
	c = std::toupper(c);
}

void	stringfunc(std::string &str)
{
	str = "BoB";
}

int main(void)
{
	int 		iarr[5] = {1, 2, 3, 4, 5};
	float		farr[2] = {2.2, 0.000145};
	char		carr[7] = {'w', 'q', 'a', 's', 'd', 'f', 'g'};
	std::string	sarr[3] = {"hello", "world", "!"};
	
	itter(iarr, 5, &writeType);
	std::cout << std::endl;
	itter(farr, 2, &writeType);
	std::cout << std::endl;
	itter(carr, 7, &writeType);
	std::cout << std::endl;
	itter(sarr, 3, &writeType);
	std::cout << std::endl;

	itter(iarr, 5, &intfunc);
	itter(farr, 2, &floatfunc);
	itter(carr, 7, &charfunc);
	itter(sarr, 3, &stringfunc);

	std::cout << std::endl;
	itter(iarr, 5, &writeType);
	std::cout << std::endl;
	itter(farr, 2, &writeType);
	std::cout << std::endl;
	itter(carr, 7, &writeType);
	std::cout << std::endl;
	itter(sarr, 3, &writeType);
	std::cout << std::endl;
}