/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:24:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/24 17:42:39 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "phonebook.class.hpp"

int	main(void)
{
	phonebook	book;
	std::string	command;

	while (1)
	{
		std::cin >> command;
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}