/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:31:37 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/26 14:46:45 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() 
{
}

Contact::~Contact()
{
}

std::string	Contact::_getInput(std::string prompt) const
{
	std::string	input = "";

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!input.empty())
			break ;
		std::cout << "Please provide valid input." << std::endl;
	}
	return (input);
}

void	Contact::initContact(int index)
{
	this->_index = index + 1;
	std::cout << "New Contact" << std::endl;
	this->_firstName = _getInput("Enter first name: ");
	this->_lastName = _getInput("Enter last name: ");
	this->_nickName = _getInput("Enter nickname: ");
	this->_darkestSecret = _getInput("Reveal their darkest secret: ");
}

std::string	Contact::_trunkate(std::string	str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::previewContact(void) const
{
	if (this->_firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->_index;
	std::cout << "|" << std::setw(10) << this->_trunkate(this->_firstName);
	std::cout << "|" << std::setw(10) << this->_trunkate(this->_lastName);
	std::cout << "|" << std::setw(10) << this->_trunkate(this->_nickName);
	std::cout << "|" << std::endl;
}

void	Contact::viewContact(void) const
{
	std::cout << "Viewing Contact: " << this->_index << std::endl;
	std::cout << "First name:\t" << this->_firstName << std::endl;
	std::cout << "Last name:\t" << this->_lastName << std::endl;
	std::cout << "Nickname:\t" << this->_nickName << std::endl;
	std::cout << "Darkest secret:" << std::endl << this->_darkestSecret << std::endl;
}