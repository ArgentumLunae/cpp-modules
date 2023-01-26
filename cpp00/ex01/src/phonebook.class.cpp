/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:19:32 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/25 22:51:39 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <iomanip>

int	phonebook::_getInput(std::string prompt) const
{
	int	input = -1;

	while (1)
	{
		std::cout << prompt;
		std::cin >> input;
		if (input > 0 && input <= this->_listSize)
			break ;
		else
			std::cout << "Please provide existing index." << std::endl;
	}
	return (input - 1);
}

phonebook::phonebook(void)
{
	std::cout << "phonebook has been created." << std::endl;
	this->_listSize = 0;
	return ;
}

phonebook::~phonebook(void)
{
	std::cout << "phonebook has been destroyed." << std::endl;
	return ;
}

void	phonebook::displayCommands() const
{
	std::cout << "PHONEBOOK COMMANDS" << std::endl;
	std::cout << "\tADD: add a new contact" << std::endl;
	std::cout << "\tSEARCH: see contact list, and view contact" << std::endl;
	std::cout << "\tEXIT: exit program" << std::endl << std::endl;
}

void	phonebook::addContact()
{
	static int oldest = 0;

	if (oldest == 8)
		oldest = 0;
	this->_list[oldest].initContact(oldest);
	oldest++;
	if (this->_listSize < 8)
		this->_listSize++;
	return ;
}

void	phonebook::displayContacts() const
{
	int	index = 0;

	if (this->_listSize < 1)
	{
		std::cout << "No contacts in list." << std::endl;
		return ;
	}
	std::cout << "All contacts" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	while (index < 8)
	{
		this->_list[index].previewContact();
		index++;
	}
}

void	phonebook::searchContact() const
{
	int	index;

	if (this->_listSize < 1)
		return ;
	index = _getInput("Enter the index of the contact you wish to look at: ");
	this->_list[index].viewContact();
	return ;
}
