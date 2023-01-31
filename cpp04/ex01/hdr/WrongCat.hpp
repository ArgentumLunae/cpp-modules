/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 20:38:26 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:50:53 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat & src);
		~WrongCat();

		WrongCat & operator=(const WrongCat & rhs);

		void	makeSound(void) const;
};

#endif
