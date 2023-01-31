/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 21:06:32 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:23:26 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
	return ;
}

Brain::Brain(Brain &src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	if (this != &src)
		*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}


/*-------- Assignment operator --------*/

Brain &Brain::operator=(Brain &rhs)
{
	if (this != &rhs)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}