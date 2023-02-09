/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 17:00:50 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 19:06:10 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>

/*-------- Constructors & Destructor --------*/

Array::Array() : _array(new T()), _length(0)
{}

Array::Array(const int length) : _array(new T[length]), _length(length)
{}

Array::Array(const Array &src) : _array(src.getArray()), _length(src.getLength)
{}

Array::~Array()
{
	delete [] this->_array;
}


/*-------- Class Operators --------*/

Array &Array::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		delete [] this->_array;
		this->_length = rhs.getLength();
		this->_array = new T[this->_length];
		for (int i = 0; i < this->_length; i++)
			this->_array[i] = rsh.getArray()[i];
	}
	return (*this);
}

T	&Array::operator[](unsigned int i)
{
	if (i > this->_length)
		throw (this->OutOfBoundsException());
	return (this->_array[i]);
}


/*-------- Getters & Setters --------*/

T	*Array::getArray(void) const
{
	return (this->_array);
}

int	Array::getLength(void) const
{
	return (this->_length);
}


/*-------- Member Functions --------*/

int	Array::size(void) const
{
	return (this->_length);
}


