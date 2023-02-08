/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 13:00:36 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/02/01 13:42:18 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(int grade) : _grade(grade)
{
	std::cout << "Bureaucrat parametric constructor called." << std::endl;
	if (this->_grade < 1)
		throw "Grade too high";
	if (this->_grade > 150)
		throw "Grade too low";
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &src)
{
	std::cout << "Bureaucreat copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
	return ;
}


/*-------- Assignment operator --------*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}


/*-------- Getters & Setters --------*/

