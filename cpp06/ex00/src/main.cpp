/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 14:41:06 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/07 16:13:31 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConverter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	TypeConverter	converter;

	if (argc != 2)
	{
		std::cout << "Usecase: ./ex00 <argument>" << std::endl;
		return (1);
	}
	try
	{
		converter.convertType(argv[1]);
		std::cout << converter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error:\t" << e.what() << std::endl;
	}
	return (0);
}