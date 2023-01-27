/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SadSed.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 13:55:39 by mteerlin      #+#    #+#                 */
/*   Updated: 2023/01/27 14:30:26 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SadSed.hpp"
#include <iostream>
#include <fstream>

SadSed::SadSed(std::string inFile) : _inFile(inFile)
{	
	this->_outFile = this->_inFile + ".replace";
}

SadSed::~SadSed()
{
}

void	SadSed::replace(std::string toReplace, std::string Replacement)
{
	std::ifstream inStream(this->_inFile);
	if (inStream.is_open())
	{
		std::ofstream outStream;
		std::string	buff;
		size_t		pos;

		std::getline(inStream, buff, '\0');
		pos = buff.find(toReplace);
		while (pos < buff.npos)
		{
			buff.erase(pos, toReplace.length());
			buff.insert(pos, Replacement);
			pos = buff.find(toReplace, (pos + Replacement.length()));
		}
		inStream.close();
		outStream.open(this->_outFile);
		if (outStream.is_open())
		{
			outStream << buff;
			outStream.close();
		}
		else
			std::cout << "Failed to open output file." << std::endl;
	}
	else
		std::cout << "Failed to open input file." << std::endl;
}