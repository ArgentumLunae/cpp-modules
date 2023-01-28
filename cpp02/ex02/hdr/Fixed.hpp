/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 16:10:20 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 17:07:10 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fpNumber;
	static const int	_bits = 8;

public:
	Fixed(void);
	Fixed(int number);
	Fixed(float number);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed & operator=(const Fixed & rhs);
	
	Fixed	operator+(const Fixed & rhs) const;
	Fixed	operator-(const Fixed & rhs) const;
	Fixed	operator*(const Fixed & rhs) const;
	Fixed	operator/(const Fixed & rhs) const;

	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	bool	operator==(const Fixed & rhs) const;
	bool	operator!=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>(const Fixed &rhs) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static const Fixed & min(const Fixed &a, const Fixed &b);
	static const Fixed & max(const Fixed &a, const Fixed &b);
	static Fixed &	min(Fixed &a, Fixed &b);
	static Fixed &	max(Fixed &a, Fixed &b);
};

std::ostream & operator<<(std::ostream &os, Fixed const &rhs);

#endif