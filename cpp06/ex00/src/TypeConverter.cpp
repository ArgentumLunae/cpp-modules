/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TypeConverter.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 14:55:12 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/07 17:07:51 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConverter.hpp"
#include <iostream>

/*-------- Constructors & Destructor --------*/

TypeConverter::TypeConverter() : _char('\0'), _int(0), _float(0.0f), _double(0.0)
{
}

TypeConverter::TypeConverter(TypeConverter & src)
{
	*this = src;
	return ;
}

TypeConverter::~TypeConverter()
{
}

/*-------- Assignment Operator --------*/

TypeConverter &TypeConverter::operator=(TypeConverter &rhs)
{
	if (this != &rhs)
	{
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
		this->_str = rhs._str;
		this->_type = rhs._type;
	}
	return (*this);
}

/*-------- Getters & Setters --------*/

char	TypeConverter::getChar(void) const
{
	return (this->_char);
}

void	TypeConverter::setChar(const char	c)
{
	this->_char = c;
}

int		TypeConverter::getInt(void) const
{
	return (this->_int);
}

void	TypeConverter::setInt(const int i)
{
	this->_int = i;
}

float	TypeConverter::getFloat(void) const
{
	return (this->_float);
}

void	TypeConverter::setFloat(const float f)
{
	this->_float = f;
}

double	TypeConverter::getDouble(void) const
{
	return (this->_double);
}

void	TypeConverter::setDouble(const double d)
{
	this->_double = d;
}

std::string	TypeConverter::getStr(void) const
{
	return (this->_str);
}

void	TypeConverter::setStr(const std::string str)
{
	this->_str = str;
}

int		TypeConverter::getType(void) const
{
	return (this->_type);
}

void	TypeConverter::setType(void)
{
	if (this->typeIsLiteral())
		this->_type = LITERAL;
	else if (this->typeIsChar())
		this->_type = CHAR;
	else if (this->typeIsInt())
		this->_type = INT;
	else if (this->typeIsFloat())
		this->_type = FLOAT;
	else if (this->typeIsDouble())
		this->_type = DOUBLE;
	else
		this->_type = INVALID;
}


/*-------- Member Functions --------*/

bool	TypeConverter::typeIsChar(void) const
{
	if (this->_str.length() == 1 && !std::isdigit(this->_str[0]) && std::isprint(this->_str[0]))
		return (true);
	return (false);
}

bool	TypeConverter::typeIsInt(void) const
{
	int	sign = 0;

	if (this->_str[0] == '-' || this->_str[0] == '-')
		sign++;
	for	(int i = sign; i < (int)(this->_str.length() - 1); i++)
	{
		if (!std::isdigit(this->_str[i]))
			return (false);
	}
	return (true);
}

bool	TypeConverter::typeIsFloat(void) const
{
	int	sign = 0;
	int	decimalPoint = 0;
	int	length = this->_str.length() - 2;

	if (this->_str.back() != 'f')
		return (false);
	if (this->_str[0] == '-' || this->_str[0] == '-')
		sign++;
	for (int i = sign; i < length; i++)
	{
		if (this->_str[i] == '.')
			decimalPoint++;
		if ((!std::isdigit(this->_str[i]) && this->_str[i] != '.') || decimalPoint > 1)
			return (false);
	}
	return (true);
}

bool	TypeConverter::typeIsDouble(void) const
{
	int	sign = 0;
	int	decimalPoint = 0;
	int	length = this->_str.length() - 1;

	if (this->_str[0] == '-' || this->_str[0] == '-')
		sign++;
	for (int i = sign; i < length; i++)
	{
		if (this->_str[i] == '.')
			decimalPoint++;
		if ((!std::isdigit(this->_str[i]) && this->_str[i] != '.') || decimalPoint > 1)
			return (false);
	}
	return (true);
}

bool	TypeConverter::typeIsLiteral(void) const
{
	if (!this->_str.compare("nanff") || !this->_str.compare("+inff") || !this->_str.compare("-inff") || \
		!this->_str.compare("nan") || !this->_str.compare("+inf") || !this->_str.compare("-inf"))
		return (true);
	return (false);
}

std::ostream &TypeConverter::writeChar(std::ostream &os) const
{
	if (this->_type == LITERAL)
		os << "conversion argument is literal.";
	else if (this->_int > 127)
		os << "outside of ascii scope.";
	else if (!std::isprint(this->_char))
		os << "conversion to character is not printable.";
	else
		os << this->_char;
	return (os);
}

std::ostream &TypeConverter::writeInt(std::ostream &os) const
{
	if (this->_type == LITERAL)
		os << "conversion argument is literal.";
	else
		os << this->_int;
	return (os);
}

std::ostream &TypeConverter::writeFloat(std::ostream &os) const
{
	if (!this->_str.compare("nan") || !this->_str.compare("nanf"))
		os << "nanf";
	else if (!this->_str.compare("+inf") || !this->_str.compare("+inff"))
		os << "+inff";
	else if (!this->_str.compare("-inf") || !this->_str.compare("-inff"))
		os << "-inff";
	else if (this->_float - static_cast<int>(this->_float) == 0)
		os << this->_float << ".0f";
	else
		os << this->_float << "f";
	return (os);
}	

std::ostream &TypeConverter::writeDouble(std::ostream &os) const
{
	if (!this->_str.compare("nan") || !this->_str.compare("nanf"))
		os << "nan";
	else if (!this->_str.compare("+inf") || !this->_str.compare("+inff"))
		os << "+inf";
	else if (!this->_str.compare("-inf") || !this->_str.compare("-inff"))
		os << "-inf";
	else if (this->_double - static_cast<int>(this->_double) == 0)
		os << this->_double << ".0";
	else
		os << this->_double;
	return (os);
}

void	TypeConverter::convertType(char *arg)
{
	this->setStr(arg);
	this->setType();
	switch (this->_type)
	{
		case CHAR:
		{
			this->_char 	= this->_str[0];
			this->_int		= static_cast<int>(this->_char);
			this->_float	= static_cast<float>(this->_char);
			this->_double	= static_cast<double>(this->_char);
			break ;
		}
		case INT:
		{
			this->_int		= std::stoi(this->_str);
			this->_char 	= static_cast<char>(this->_int);
			this->_float	= static_cast<float>(this->_int);
			this->_double	= static_cast<double>(this->_int);
			break ;
		}
		case FLOAT:
		{
			this->_float	= std::stof(this->_str);
			this->_char 	= static_cast<char>(this->_float);
			this->_int		= static_cast<int>(this->_float);
			this->_double	= static_cast<double>(this->_float);
			break ;
		}
		case DOUBLE:
		{
			this->_double	= std::stod(this->_str);
			this->_char 	= static_cast<char>(this->_double);
			this->_int		= static_cast<int>(this->_double);
			this->_float	= static_cast<float>(this->_double);
			break ;
		}
	}
}


/*-------- Stream Operators --------*/

std::ostream	&operator<<(std::ostream &os, TypeConverter &rhs)
{
	os << "char:\t"; rhs.writeChar(os); os << std::endl;
	os << "int:\t"; rhs.writeInt(os); os << std::endl;
	os << "float:\t"; rhs.writeFloat(os); os << std::endl;
	os << "double:\t"; rhs.writeDouble(os); os << std::endl;
	return (os);	
}
