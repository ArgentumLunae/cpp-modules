/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 21:33:13 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:51:50 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

/*-------- Constructors & Destructors --------*/

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : RobotomyRequestForm(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*-------- Assignment Operator --------*/

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return (*this);
}


/*-------- Getters & Setters --------*/

std::string RobotomyRequestForm::getTarget(void)
{
	return (this->_target);
}


/*-------- Member Functions --------*/

void	RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	static int	i = 0;
	this->checkExecuteRequirements(executor);
	std::cout << "BZZZZT.... GGGHHRRRRR.... ZEEEEEEB-" << std::endl;
	if (i % 2)
		 std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomization process on " << this->_target << " has failed." << std::endl;
	i++;
}
