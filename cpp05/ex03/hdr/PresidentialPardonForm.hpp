/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 21:33:16 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:42:02 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


# include "AForm.hpp"
# include <string>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

		PresidentialPardonForm();
	
	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm & src);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

		std::string	getTarget(void);
		
		void	execute(const Bureaucrat & executor);
};

#endif