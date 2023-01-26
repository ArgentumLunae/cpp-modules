/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 16:58:43 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/25 22:51:36 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"

class phonebook
{
private:
	contact		_list[8];
	int			_listSize;

	int			_getInput(std::string prompt) const;

public:
	phonebook(void);
	~phonebook(void);

	void	displayCommands() const;
	void	addContact();
	void	displayContacts() const;
	void	searchContact() const;
};

#endif