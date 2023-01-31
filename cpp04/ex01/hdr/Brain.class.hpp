/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 21:02:39 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:21:57 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <string>

class Brain
{
	private:
		std::string	ideas[100];
	
	public:
		Brain();
		Brain(Brain &src);
		~Brain();

		Brain &operator=(Brain & rhs);
};

#endif