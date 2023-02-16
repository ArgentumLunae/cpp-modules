/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 15:09:03 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:33:29 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <string>
# include <ostream>
# include <exception>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;
		Bureaucrat();

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat & src);
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
		void	signForm(AForm &form) const;
		void	executeForm(AForm &form) const;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif