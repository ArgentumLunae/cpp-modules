/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:19:28 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:55:46 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AbsAnimal.hpp"
# include "Brain.class.hpp"

class Dog : public AbsAnimal
{
	private:
		Brain *_brain;

	public:
		Dog();
		Dog(const Dog & src);
		~Dog();

		Dog & operator=(const Dog & rhs);

		void	makeSound(void) const;
};

#endif