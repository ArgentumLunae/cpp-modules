/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 20:38:24 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/31 20:47:55 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal & src);
		~WrongAnimal();

		WrongAnimal & operator=(const WrongAnimal & rhs);

		std::string		getType(void) const;

		void	makeSound(void) const;
};

#endif
