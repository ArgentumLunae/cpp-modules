/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 15:09:03 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 14:21:26 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <ostream>
# include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;
		Bureaucrat();

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();

		Bureaucrat & operator=(Bureaucrat & rhs);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat: Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat: Grade is too low");
				}
		};

		std::string getName() const;
		int	getGrade() const;

		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form &form);
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif