/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:19:32 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/24 18:16:48 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <iostream>

phonebook::phonebook(void)
{
	std::cout << "phonebook has been created." << std::endl;
	return ;
}

phonebook::~phonebook(void)
{
	std::cout << "phonebook has been destroyed." << std::endl;
	return ;
}

void	phonebook::add()
{
	static int oldest = 0;

	if (oldest == 8)
		oldest = 0;
	std::cout << "first name: ";
	std::cin >> this->list[oldest].first_name;
	std::cout << "last name: ";
	std::cin >> this->list[oldest].last_name;
	std::cout << "nick name: ";
	std::cin >> this->list[oldest].nick_name;
	std::cout << "darkest secret: ";
	std::cin >> this->list[oldest].darkest_secret;
	oldest++;
	return ;
}

void	phonebook::search() const
{
	std::cout << "search function has been called." << std::endl;
	return ;
}
