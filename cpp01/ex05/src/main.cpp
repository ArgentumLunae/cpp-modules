/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 14:46:02 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/27 15:25:31 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl 	harley;
	std::string	input;

	std::cout << "Valid commands:"  << std::endl;
	std::cout << "\tDEBUG: run Harl::debug()" << std::endl;
	std::cout << "\tINFO: run Harl::info()" <<std::endl;
	std::cout << "\tWARNING: run Harl::warning()" << std::endl;
	std::cout << "\tERROR: run harl::error()" << std::endl;
	std::cout << "\texit: quit the program" << std::endl;
	std::cin >> input;
	while (input.compare("exit"))
	{
		harley.compain(input);
		std::cin >> input;
	}
	return (EXIT_SUCCESS);
}