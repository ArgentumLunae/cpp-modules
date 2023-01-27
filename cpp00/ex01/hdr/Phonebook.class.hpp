/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 16:58:43 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/26 14:46:45 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Phonebook_CLASS_HPP
# define Phonebook_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook
{
private:
	Contact		_list[8];
	int			_listSize;

	int			_getInput(std::string prompt) const;

public:
	Phonebook(void);
	~Phonebook(void);

	void	displayCommands() const;
	void	addContact();
	void	displayContacts() const;
	void	searchContact() const;
};

#endif