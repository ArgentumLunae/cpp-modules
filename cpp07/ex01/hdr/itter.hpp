/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   itter.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 14:08:16 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 14:28:16 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITTER_HPP
# define ITTER_HPP

#include <iostream>

template<typename T>
void	itter(T *array, const int length, void(* f)(T &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template<typename T>
void	writeType(T &arg)
{
	std::cout << arg << "\t";
}

#endif