/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:22:49 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/02 17:08:12 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int	main(void)
{
	try
	{
		Bureaucrat	jeff = Bureaucrat("Jeff", 0);

		std::cout << jeff << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	josh = Bureaucrat("Josh", 151);

		std::cout << josh << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	jack = Bureaucrat("Jack", 5);

		std::cout << jack << std::endl;
		while (1)
		{
			jack.incrementGrade();
			std::cout << jack << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	jeof = Bureaucrat("Jeof", 145);

		std::cout << jeof << std::endl;
		while (1)
		{
			jeof.decrementGrade();
			std::cout << jeof << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	return (0);
}