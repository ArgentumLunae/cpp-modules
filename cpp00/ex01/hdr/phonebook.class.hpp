/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 16:58:43 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/24 18:16:52 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"

class phonebook
{

public:
	contact	list[8];

	phonebook(void);
	~phonebook(void);

	void	add();
	void	search() const;
};

#endif