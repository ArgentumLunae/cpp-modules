/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:22:49 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 14:23:41 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int	main(void)
{
	try
	{
		Bureaucrat	jeff = Bureaucrat("Jeff", 15);
		Bureaucrat	steve = Bureaucrat("steve", 148);
		Form		A23 = Form("A23", 79, 46);
		Form		G08 = Form("G08", 150, 2);

		std::cout << jeff << std::endl;
		std::cout << steve << std::endl;
		std::cout << A23 << std::endl;
		std::cout << G08 << std::endl;
		jeff.signForm(A23);
		steve.signForm(G08);
		std::cout << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	
	try
	{
		Bureaucrat	jeff = Bureaucrat("Jeff", 15);
		Bureaucrat	steve = Bureaucrat("steve", 148);
		Form		aTwentyThree = Form("A23", 79, 46);
		Form		gZeroEight = Form("G08", 150, 2);

		std::cout << jeff << std::endl;
		std::cout << steve << std::endl;
		std::cout << aTwentyThree << std::endl;
		std::cout << gZeroEight << std::endl;
		jeff.signForm(gZeroEight);
		steve.signForm(aTwentyThree);
		std::cout << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout <<e.what() << std::endl << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	
	try
	{
		Bureaucrat	jeff = Bureaucrat("Jeff", 15);
		Bureaucrat	steve = Bureaucrat("steve", 148);
		Form		gZeroEight = Form("G08", 151, 2);
		Form		aTwentyThree = Form("A23", 0, 46);

		std::cout << jeff << std::endl;
		std::cout << steve << std::endl;
		std::cout << aTwentyThree << std::endl;
		std::cout << gZeroEight << std::endl;
		jeff.signForm(aTwentyThree);
		steve.signForm(gZeroEight);
		std::cout << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout <<e.what() << std::endl << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	
	return (0);
}