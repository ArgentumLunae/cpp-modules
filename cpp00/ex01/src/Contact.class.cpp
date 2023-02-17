/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:31:37 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/02/17 15:27:26 by mteerlin      ########   odam.nl         */
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
		else if (std::cin.eof())
		{
			std::cin.clear();
			std::clearerr(stdin);
			input = "";
		}
		std::cout << "Please provide valid input." << std::endl;
	}
	return (input);
}

void	Contact::initContact(int index)
{
	this->_index = index + 1;
	std::cout << "New Contact" << std::endl;
	this->_firstName = Contact::_getInput("Enter first name: ");
	this->_lastName = Contact::_getInput("Enter last name: ");
	this->_nickName = Contact::_getInput("Enter nickname: ");
	this->_phoneNumber = Contact::_getInput("Enter phone number: ");
	this->_darkestSecret = Contact::_getInput("Reveal their darkest secret: ");
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
	std::cout << "Phone number:\t" << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret:" << std::endl << this->_darkestSecret << std::endl;
}

/*-------- Getters & Setters --------*/

std::string	Contact::getFirstName(void) const{
	return (this->_firstName);
}

void		Contact::setFirstName(std::string first){
	this->_firstName = first;
	return ;
}

std::string	Contact::getLastName(void) const{
	return (this->_lastName);
}

void		Contact::setLastName(std::string last){
	this->_lastName = last;
	return ;
}

std::string	Contact::getNickName(void) const{
	return (this->_nickName);
}

void		Contact::setNickName(std::string nick){
	this->_nickName = nick;
	return ;
}

std::string	Contact::getPhoneNumber(void) const{
	return (this->_phoneNumber);
}

void		Contact::setPhoneNumber(std::string phone){
	this->_phoneNumber = phone;
	return ;
}

std::string	Contact::getDarkestSecret(void) const{
	return (this->_darkestSecret);
}

void		Contact::setDarkestSecret(std::string secret){
	this->_darkestSecret = secret;
	return ;
}
