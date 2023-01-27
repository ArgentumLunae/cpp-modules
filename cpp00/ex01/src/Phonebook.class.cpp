/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:19:32 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/26 14:46:45 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

int	Phonebook::_getInput(std::string prompt) const
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

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook has been created." << std::endl;
	this->_listSize = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook has been destroyed." << std::endl;
	return ;
}

void	Phonebook::displayCommands() const
{
	std::cout << "Phonebook COMMANDS" << std::endl;
	std::cout << "\tADD: add a new Contact" << std::endl;
	std::cout << "\tSEARCH: see Contact list, and view Contact" << std::endl;
	std::cout << "\tEXIT: exit program" << std::endl << std::endl;
}

void	Phonebook::addContact()
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

void	Phonebook::displayContacts() const
{
	int	index = 0;

	if (this->_listSize < 1)
	{
		std::cout << "No Contacts in list." << std::endl;
		return ;
	}
	std::cout << "All Contacts" << std::endl;
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

void	Phonebook::searchContact() const
{
	int	index;

	if (this->_listSize < 1)
		return ;
	index = _getInput("Enter the index of the Contact you wish to look at: ");
	this->_list[index].viewContact();
	return ;
}
