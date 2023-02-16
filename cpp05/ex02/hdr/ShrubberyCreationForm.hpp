/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 21:33:19 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:42:12 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <string>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

		ShrubberyCreationForm();
	
	public:
		ShrubberyCreationForm(const std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

		std::string	getTarget(void);
		
		void	execute(const Bureaucrat & executor);
};

#endif