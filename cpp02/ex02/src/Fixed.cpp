/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 16:10:25 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 17:10:16 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/*-------- Constructors --------*/

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


/*-------- Assignment operator --------*/

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fpNumber = rhs.getRawBits();
	return (*this);
}


/*-------- Arithmatic operators --------*/

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*-------- In-/Decrement operators --------*/

Fixed &Fixed::operator++(void)
{
	++this->_fpNumber;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	--this->_fpNumber;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_fpNumber++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_fpNumber--;
	return (temp);
}


/*-------- Comparison operators --------*/

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}


/*-------- Member functions --------*/

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

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if	(a <= b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if	(a >= b)
		return (a);
	return (b);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b)
{
	if	(a <= b)
		return (a);
	return (b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b)
{
	if	(a >= b)
		return (a);
	return (b);
}
