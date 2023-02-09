/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 17:32:49 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 20:16:13 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }


/*-------------------------------------------------------------------*/


int	main(void)
{
	{
		Array arr = Array();

		try
		{
			arr[1] = 0;
			std::cout << arr << std::endl;
		} 
		catch (Array<>::OutOfBoundsException &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		Array iarr = Array<int>(5);

		try
		{
			for (unsigned int i = 0; i < iarr.size(); i++)
				iarr[i] = i;
			std::cout << iarr << std::endl;
		}
		catch (Array<int>::OutOfBoundsException &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		Array farr = Array<float>(7);

		try
		{
			for (unsigned int i = 0; i < farr.size(); i++)
				farr[i] = static_cast<float>(i) / 2;
			std::cout << farr << std::endl;
		}
		catch (Array<float>::OutOfBoundsException &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		Array carr = Array<char>(4);

		try
		{
			for (unsigned int i = 0; i < carr.size(); i++)
				carr[i] = ('a' + i);
			std::cout << carr << std::endl;
		}
		catch (Array<char>::OutOfBoundsException &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		Array sarr = Array<std::string>(2);

		try
		{
			for (unsigned int i = 0; i < sarr.size(); i++)
				sarr[i] = "hello";
			std::cout << sarr << std::endl;
		}
		catch (Array<std::string>::OutOfBoundsException &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}