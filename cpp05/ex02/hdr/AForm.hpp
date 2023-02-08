/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 11:57:45 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/03 13:59:22 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

		AForm();

	public:
		AForm(std::string name, int singGrade, int execGrade);
		AForm(AForm & src);
		~AForm();

		AForm & operator=(AForm & rhs);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("From: Grade too high.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("From: Grade too low.");
				}
		};
		class NotSignedExeption : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("From: Not signed.");
				}
		};

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;

		void		beSigned(const Bureaucrat &signer);
		bool		checkExecuteRequirements(const Bureaucrat &executor) const;
		virtual void execute(const Bureaucrat &executor) = 0;
};

std::ostream & operator<<(std::ostream & os, const AForm & rhs);

#endif