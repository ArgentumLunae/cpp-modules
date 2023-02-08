/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TypeConverter.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 14:55:16 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/07 16:34:19 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPECONVERTER_HPP
# define TYPECONVERTER_HPP

# include <string>
# include <ostream>

typedef	enum	e_types
{
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	LITERAL
}	t_types;

class TypeConverter
{
	private:
		char	_char;
		int		_int;
		float	_float;
		double	_double;

		std::string	_str;
		int			_type;

	public:
		TypeConverter();
		TypeConverter(TypeConverter & src);
		~TypeConverter();

		TypeConverter & operator=(TypeConverter & rhs);

		char	getChar(void) const;
		void	setChar(char c);
		int		getInt(void) const;
		void	setInt(int i);
		float	getFloat(void) const;
		void	setFloat(float f);
		double	getDouble(void) const;
		void	setDouble(double d);

		std::string	getStr(void) const;
		void		setStr(std::string str);
		int		getType(void) const;
		void	setType(void);

		bool	typeIsChar(void) const;
		bool	typeIsInt(void) const;
		bool	typeIsFloat(void) const;
		bool	typeIsDouble(void) const;
		bool	typeIsLiteral(void) const;

		std::ostream & writeChar(std::ostream & os) const;
		std::ostream & writeInt(std::ostream & os) const;
		std::ostream & writeFloat(std::ostream & os) const;
		std::ostream & writeDouble(std::ostream & os) const;

		void convertType(char *argc);
};

std::ostream & operator<<(std::ostream & os, TypeConverter & rhs);

#endif