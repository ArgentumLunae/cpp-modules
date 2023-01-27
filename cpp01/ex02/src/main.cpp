/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 13:15:10 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/01/26 13:33:16 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HELLO THIS IS BRAIN";
	std::string *stringPtr = &string;
	std::string	&stringRef = string;

	std::cout << "address of string:\t\t" << &string << std::endl;
	std::cout << "address held by stringPtr:\t" << stringPtr << std::endl;
	std::cout << "address held by stringRef:\t" << &stringRef << std::endl;
	std::cout << std::endl;
	std::cout << "value of string:\t\t" << string << std::endl;
	std::cout << "value pointed to by stringPtr:\t" << *stringPtr << std::endl;
	std::cout << "value pointed to by stringRef:\t" << stringRef << std::endl;
	return (0);
}