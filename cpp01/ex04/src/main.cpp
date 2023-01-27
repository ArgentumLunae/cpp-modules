/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 12:04:06 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/27 14:17:16 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SadSed.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usecase: ./sadsed [filename] [string 1] [string 2]" << std::endl;
		return (0);
	}
	else
	{
		SadSed sSed(argv[1]);

		sSed.replace(argv[2], argv[3]);
	}	
	return (0);
}