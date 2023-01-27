/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:27:02 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/26 14:46:45 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_CLASS_CPP
# define Contact_CLASS_CPP

# include <string>

class Contact
{
private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_darkestSecret;

	std::string _getInput(std::string prompt) const;
	std::string _trunkate(std::string str) const;

public:
	Contact();
	~Contact();

	void	initContact(int index);
	void	previewContact(void) const;
	void	viewContact(void) const;
};

#endif