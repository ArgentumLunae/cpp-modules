/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SadSed.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 13:53:59 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/27 14:21:48 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SADSED_HPP
# define SADSED_HPP

# include <string>

class SadSed
{
private:
	std::string	_inFile;
	std::string _outFile;

public:
	SadSed(std::string inFile);
	~SadSed();

	void replace(std::string toReplace, std::string replacement);
};

#endif
