/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 20:45:01 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/10 11:55:13 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template<typename T>
bool	easyfind(const T &container, const int target)
{
	if (std::find(container.begin(), container.end(), target) != container.end())
		return (true);
	return (false);
}

#endif