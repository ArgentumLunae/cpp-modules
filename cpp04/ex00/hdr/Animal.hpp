/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:06:56 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:51:33 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal & src);
		virtual ~Animal();

		Animal & operator=(const Animal & rhs);

		std::string		getType(void) const;

		virtual void	makeSound(void) const;
};

#endif
