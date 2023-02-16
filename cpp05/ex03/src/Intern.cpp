/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/05 16:21:35 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 16:59:01 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

Intern::Intern()
{
}

Intern::Intern(Intern & src) : Intern()
{
	(void)src;
	return ;
}

Intern::~Intern()
{
}


/*-------- Assignment Operator --------*/

Intern	&Intern::operator=(Intern &rhs)
{
	(void)rhs;
	return (*this);
}


/*-------- Member Functions --------*/

AForm	*Intern::makeForm(std::string name, std::string target) const
{
	std::string	formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *forms[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << formNames[i] << std::endl;
			return forms[i];
		}
	}
	std::cout << "Intern cannot create form " << name << ". Form type note recognised" << std::endl;
	return (NULL);
}