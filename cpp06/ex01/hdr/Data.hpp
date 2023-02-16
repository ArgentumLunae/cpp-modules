/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 21:21:55 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/07 21:25:51 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

class Data
{
	private:
		std::string	_name;
		int			_age;

	public:
		Data();
		Data(Data & src);
		~Data();
}

#endif