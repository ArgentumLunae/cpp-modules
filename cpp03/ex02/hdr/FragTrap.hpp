/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/28 20:21:01 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/28 20:37:37 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);

public:
	FragTrap(std::string name);
	FragTrap(FragTrap & src);
	~FragTrap();

	FragTrap & operator=(FragTrap & rhs);

	void	attack(const std::string & target);
	void	highFiveGuys(void) const;
};

#endif