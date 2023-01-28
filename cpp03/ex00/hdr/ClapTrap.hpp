/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 17:33:53 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 19:40:42 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	ClapTrap(void);

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap & src);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & rhs);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int ammount);
	void	beRepaired(unsigned int	ammount);
};

#endif