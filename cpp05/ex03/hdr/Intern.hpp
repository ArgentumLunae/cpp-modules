/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/05 16:06:53 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 16:52:11 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
	private:

	public:
		Intern();
		Intern(Intern & src);
		~Intern();

		Intern & operator=(Intern & rhs);

		AForm *makeForm(std::string name, std::string target) const;
};

#endif