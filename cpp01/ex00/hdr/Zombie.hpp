/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 12:17:45 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/17 15:54:42 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_CLASS_H
# define Zombie_CLASS_H

# include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif