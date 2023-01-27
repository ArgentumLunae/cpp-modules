/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 17:14:42 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/27 18:38:33 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int number) : _fpNumber(number)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignment opearator called" << std::endl;
	if (this != &rhs)
		this->_fpNumber = rhs.getNumber();
	return (*this);
}

int	Fixed::getNumber(void) const
{
	return (this->_fpNumber);
}
