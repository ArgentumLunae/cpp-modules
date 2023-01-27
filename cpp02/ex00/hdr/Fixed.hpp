/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 17:13:50 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/27 18:34:01 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_fpNumber;
	static const int	_bits;
public:
	Fixed(void);
	Fixed(int number);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);

	int		getNumber(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif