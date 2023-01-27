/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:34:23 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 16:24:36 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		explicit Weapon(std::string type);
		~Weapon();

		std::string	getType() const;
		void		setType(std::string	type);
};

#endif
