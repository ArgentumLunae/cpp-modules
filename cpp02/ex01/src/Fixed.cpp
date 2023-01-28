/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 14:58:04 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 16:09:56 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _fpNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int number) : _fpNumber(number << this->_bits)
{
	std::cout << "Parametric integer constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float number) : _fpNumber(number * (1 << this->_bits))
{
	std::cout << "Parametric float constructer called" << std::endl;
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
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fpNumber = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fpNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpNumber = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << this->_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_fpNumber >> 8);
}

std::ostream &operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}