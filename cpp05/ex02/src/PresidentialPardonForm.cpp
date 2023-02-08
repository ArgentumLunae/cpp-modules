/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 21:33:10 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 14:58:49 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) : PresidentialPardonForm(src.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*-------- Assignment Operator --------*/

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

/*-------- Getters & Setters --------*/

std::string PresidentialPardonForm::getTarget(void)
{
	return (this->_target);
}


/*-------- Member Functions --------*/

void	PresidentialPardonForm::execute(const Bureaucrat & executor)
{
	this->checkExecuteRequirements(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;	
}