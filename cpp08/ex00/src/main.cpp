/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 21:11:13 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/10 11:52:56 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define ARRSIZE 10

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: ./ex00 <number searhed in vector> <number searched in list>" << std::endl;
		return (1);
	}
	int arr[ARRSIZE] = {0, 1, 2, 3, 4, 5, 6, 7 , 8, 9};

	std::vector<int>	vect(arr, &arr[ARRSIZE]);
	std::list<int>		lst(arr, &arr[ARRSIZE]);

	if (easyfind(vect, std::atoi(argv[1])))
		std::cout << "Found in vector" << std::endl;
	else
		std::cout << "Not found in vector" << std::endl;
	if (easyfind(lst, std::atoi(argv[2])))
		std::cout << "Found in list." << std::endl;
	else
		std::cout << "Not found in list" << std::endl;
}