/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 14:49:59 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/09 20:12:57 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template<typename T = int>
class Array
{
	private:
		T				*_array;
		unsigned int	_length;
	
	public:
		Array() : _array(new T()), _length(0){};
		Array(const int length) : _array(new T[length]), _length(length){};
		Array(const Array & src) : _array(src.getArray()), _length(src.getLength()){};

		Array 	& operator=(const Array & rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				_length = rhs.getLength();
				_array = new T[_length];
				for (int i = 0; i < _length; i++)
					_array[i] = rhs.getArray()[i];
			}
			return (*this);
		};
		T		& operator[](unsigned int i)
		{
			if (i >= _length)
				throw (OutOfBoundsException());
			return (_array[i]);
		};

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Out of bounds.");
				}
		};

		T	*getArray(void) const {return (_array);};
		unsigned int	getLength(void) const {return (_length);};

		unsigned int	size(void) const{return (_length);};
};

template<typename T>
std::ostream	&operator<<(std::ostream &os, Array<T> &rhs)
{
	int size;

	size = rhs.size();
	os << "{";
	for (int i = 0; i < size - 1; i++)
		os << rhs.getArray()[i] << ", ";
	os << rhs.getArray()[size - 1] << "}";
	return (os);
}

#endif