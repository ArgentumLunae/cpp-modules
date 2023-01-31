/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AbsAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:06:56 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:51:33 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ABSANIMAL_HPP
# define ABSANIMAL_HPP

# include <string>

class AbsAnimal
{
	private:
		AbsAnimal();

	protected:
		std::string	type;
	
	public:
		AbsAnimal(std::string type);
		AbsAnimal(const AbsAnimal & src);
		virtual ~AbsAnimal();

		AbsAnimal & operator=(const AbsAnimal & rhs);

		virtual std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif
