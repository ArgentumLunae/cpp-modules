/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 13:20:04 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 14:07:59 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T & a, T & b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a <= b ? a : b);
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a >= b ? a : b);
}

#endif