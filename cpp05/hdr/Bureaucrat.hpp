/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 12:49:01 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/02/01 14:45:43 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
private:
	const std::string	_name;
	int	_grade;

public:
	Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(Bureaucrat & src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat & rhs);

	class GradeTooHighException
	{

	};

	class GradeTooLowException
	{

	};

	std::string	getName() const;
	int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();
};

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::~Bureaucrat()
{
}


#endif