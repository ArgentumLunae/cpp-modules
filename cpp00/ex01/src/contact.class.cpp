/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:31:37 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/24 17:42:19 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include <iostream>

contact::contact()
{
	std::cout << "Contact has been created." << std::endl;
	return ;
}

contact::~contact()
{
	std::cout << "Contact has been destroyed." << std::endl;
	return ;
}
