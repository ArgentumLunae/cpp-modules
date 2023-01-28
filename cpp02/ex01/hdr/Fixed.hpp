/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 14:58:18 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 16:09:48 by mteerlin      ########   odam.nl         */
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

	Fixed & operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream &os, const Fixed &rhs);

#endif