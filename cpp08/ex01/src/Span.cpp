/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 12:19:54 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/10 16:59:47 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

/*-------- Constructors & Destructor --------*/

Span::Span(const unsigned int	size) : _size(size)
{}

Span::Span(const Span & src)
{
	*this = src;
}

Span::~Span()
{}


/*-------- Assignment Operator --------*/

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs.size();
		this->_list = rhs.getList();
	}
	return (*this);
}


/*-------- Getters & Setters --------*/

unsigned int Span::size(void) const
{
	return (this->_size);
}

std::list<int> Span::getList(void) const
{
	return (this->_list);
}


/*-------- Member Functions --------*/

void	Span::addNumber(int number)
{
	if (this->_list.size() >= this->_size)
		throw std::out_of_range("Span::addNumber: List is full.");
	this->_list.push_back(number);
}

void	Span::addNumber(std::list<int>::const_iterator iter, std::list<int>::const_iterator end)
{
	if (this->_list.size() >= this->_size)
		throw std::out_of_range("Span::addNumber: List is full.");
	this->_list.insert(this->_list.end(), iter, end);
}

int		Span::shortestSpan(void) const
{
	int	min;

	if (this->_list.size() <= 1)
		throw std::out_of_range("Span::shortestSpan: not enough elements in list.");
	min = this->longestSpan();
	for (std::list<int>::const_iterator iter = this->_list.begin(); iter != this->_list.end(); iter++)
	{
		for (std::list<int>::const_iterator iter2 = iter; iter2 != this->_list.end(); iter2++)
		{
			if (iter2 == iter)
				continue ;
			if (std::abs(*iter - *iter2) < min)
				min = std::abs(*iter - *iter2);
		}
	}
	return (min);
}

int		Span::longestSpan(void) const
{
	if (this->_list.size() <= 1)
		throw std::out_of_range("Span::longestSpan: not enough elements in list.");
	return (*std::max_element(this->_list.begin(), this->_list.end()) - *std::min_element(this->_list.begin(), this->_list.end()));
}
