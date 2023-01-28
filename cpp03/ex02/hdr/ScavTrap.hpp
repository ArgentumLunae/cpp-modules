/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 19:27:57 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 20:08:09 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap(void);

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap & rhs);

	void	attack(const std::string &target);
	void	guardGate(void) const;
};

#endif