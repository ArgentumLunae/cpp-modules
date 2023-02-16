/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 12:03:15 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/10 16:11:30 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>

class Span
{
	private:
		std::list<int>	_list;
		unsigned int	_size;

		Span();

	public:
		Span(const unsigned int size);
		Span(const Span & src);
		~Span();

		Span & operator=(const Span & rhs);

		unsigned int	size(void) const;
		std::list<int>	getList(void) const;

		void	addNumber(int number);
		void	addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
};

#endif