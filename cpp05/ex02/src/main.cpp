/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:22:49 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:50:52 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

int	main(void)
{
	try
	{
		Bureaucrat	junior = Bureaucrat("Jeff", 150);
		Bureaucrat	senior = Bureaucrat("steve", 50);
		Bureaucrat	executive = Bureaucrat("Harley", 2);
		ShrubberyCreationForm	SCF = ShrubberyCreationForm("SCFTarget");
		RobotomyRequestForm		RRF = RobotomyRequestForm("RRFTarget");
		PresidentialPardonForm	PPF = PresidentialPardonForm("PPFTarget");

		std::cout << junior << std::endl;
		std::cout << senior << std::endl;
		std::cout << executive << std::endl;
		std::cout << std::endl;
		std::cout << SCF << std::endl;
		std::cout << RRF << std::endl;
		std::cout << PPF << std::endl;
		std::cout << std::endl;
		junior.signForm(SCF);
		senior.signForm(RRF);
		executive.signForm(PPF);
		junior.executeForm(SCF);
		senior.executeForm(RRF);
		executive.executeForm(RRF);
		executive.executeForm(RRF);
		executive.executeForm(RRF);
		executive.executeForm(RRF);
		executive.executeForm(RRF);
		executive.executeForm(RRF);
		executive.executeForm(PPF);
		std::cout << "--------------------------------------------------" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	
	// try
	// {
	// 	Bureaucrat	jeff = Bureaucrat("Jeff", 15);
	// 	Bureaucrat	steve = Bureaucrat("steve", 148);
		
	// }
	// catch (Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	// catch (AForm::GradeTooHighException &e)
	// {
	// 	std::cout <<e.what() << std::endl << std::endl;
	// }
	// catch (AForm::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	
	// try
	// {
	// 	Bureaucrat	jeff = Bureaucrat("Jeff", 15);
	// 	Bureaucrat	steve = Bureaucrat("steve", 148);
		
	// }
	// catch (Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	// catch (AForm::GradeTooHighException &e)
	// {
	// 	std::cout <<e.what() << std::endl << std::endl;
	// }
	// catch (AForm::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	
	return (0);
}