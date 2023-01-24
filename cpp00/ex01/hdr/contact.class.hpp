/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:27:02 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/24 12:47:29 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_CPP
# define CONTACT_CLASS_CPP

# include <string>

class contact
{
public:

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	darkest_secret;

	contact(/* args */);
	~contact();
};

#endif