/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 13:08:38 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 13:26:46 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Whatever.hpp"

int main( void ) 
{
	{
		int a = 2;
		int b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	{
		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "c = " << c << ", d = " << d << std::endl;
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}