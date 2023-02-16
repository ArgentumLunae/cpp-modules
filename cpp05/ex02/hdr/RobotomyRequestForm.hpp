/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 21:33:17 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:42:08 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP


# include "AForm.hpp"
# include <ostream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

		RobotomyRequestForm();
	
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & src);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

		std::string	getTarget(void);
		
		void	execute(const Bureaucrat & executor);
};

#endif