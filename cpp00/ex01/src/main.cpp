/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:24:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/02/16 21:37:48 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Phonebook.class.hpp"

int	main(void)
{
	Phonebook	book;
	std::string	command;

	book.displayCommands();
	while (command.compare("EXIT"))
	{
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			book.addContact();
		else if (!command.compare("SEARCH"))
		{
			book.displayContacts();
			book.searchContact();
		}
		else if (std::cin.eof())
			break ;
		else
			std::cout << "Please enter a valid command: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}