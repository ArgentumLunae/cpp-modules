/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 12:05:50 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 14:52:55 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm &src) : _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	// std::cout << "AForm: Copy constructor called." << std::endl;
	return ;
}

AForm::~AForm()
{
	// std::cout << "AForm: Destructor called" << std::endl;
	return ;
}


/*-------- Assignment Operator --------*/

AForm	&AForm::operator=(AForm &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}


/*-------- Getters & Setters --------*/

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int		AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int		AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}


/*-------- Member Functions --------*/

void	AForm::beSigned(const Bureaucrat &signer)
{
	if (signer.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

bool	AForm::checkExecuteRequirements(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedExeption();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	return (true);
}

/*-------- Stream Operators --------*/

std::ostream	&operator<<(std::ostream &os, const AForm &rhs)
{
	os << "Form " << rhs.getName() << ": sign grade [" << rhs.getSignGrade() << "], execute grade [" << rhs.getExecGrade() << "]";
	return (os);
}