/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 12:05:50 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 14:18:24 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

Form::Form(const std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	// std::cout << "Form: Copy constructor called." << std::endl;
	return ;
}

Form::~Form()
{
	// std::cout << "Form: Destructor called" << std::endl;
	return ;
}


/*-------- Assignment Operator --------*/

Form	&Form::operator=(Form &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}


/*-------- Getters & Setters --------*/

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int		Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int		Form::getExecGrade(void) const
{
	return (this->_execGrade);
}


/*-------- Member Functions --------*/

void	Form::beSigned(const Bureaucrat &signer)
{
	if (signer.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

/*-------- Stream Operators --------*/

std::ostream	&operator<<(std::ostream &os, const Form &rhs)
{
	os << "Form " << rhs.getName() << ": sign grade [" << rhs.getSignGrade() << "], execute grade [" << rhs.getExecGrade() << "]";
	return (os);
}