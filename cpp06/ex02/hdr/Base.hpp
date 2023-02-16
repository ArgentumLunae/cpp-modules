/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 11:53:32 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 12:47:43 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:

		virtual ~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

#endif