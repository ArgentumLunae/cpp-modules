/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 20:33:22 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/02/17 23:15:59 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template< typename T, class container = std::deque<t>>
class MutantStack : public std::stack<T, container>
{
private:

public:
	MutantStack();
	MutantStack(const MutantStack & src)
	{
		*this = rhs;
	}
	~MutantStack();

	MutantStack & operator=(const MutantStack & rhs)
	{
		std::stack<T, Container>::operator=(rhs);
		return (*this);
	}

	typedef typename Container::iterator	iterator;

	iterator	begin()
	{
		return (this->c.begin());
	}
	iterator	end();
	{
		return (this->c.end());
	}
};

#endif