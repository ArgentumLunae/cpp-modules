/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:19:32 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/02/17 15:27:42 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

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

int	Phonebook::_getInput(std::string prompt) const
{
	std::string	input = "";
	int			in = 0;

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		in = std::atoi(input.c_str());
		if (input.length() > 1 || !std::isdigit(input[0]) || in <= 0 || in > this->_listSize)
			std::cout << "Please enter a valid index." << std::endl;
		else
			return (in - 1);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::clearerr(stdin);
		}
	}
	return (in - 1);
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
