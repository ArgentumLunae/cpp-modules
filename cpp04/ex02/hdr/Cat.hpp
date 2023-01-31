/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:19:30 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 21:55:42 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AbsAnimal.hpp"
#include "Brain.class.hpp"

class Cat : public AbsAnimal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat & src);
		~Cat();

		Cat & operator=(const Cat & rhs);

		void	makeSound(void) const;
};

#endif
