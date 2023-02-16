/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 21:33:14 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/05 15:29:55 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

/*-------- Constructors & Destructors --------*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : ShrubberyCreationForm(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*-------- Assignment Operator --------*/

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

/*-------- Getters & Setters --------*/

std::string ShrubberyCreationForm::getTarget(void)
{
	return (this->_target);
}


/*-------- Member Functions --------*/

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	this->checkExecuteRequirements(executor);
	std::ofstream out;

	out.open((this->getTarget() + "_shrubbery"));
	out << "###########################'`################################" << std::endl;
	out << "###########################  V##'############################" << std::endl;
	out << "#########################V'  `V  ############################" << std::endl;
	out << "########################V'      ,############################" << std::endl;
	out << "#########`#############V      ,A###########################V#" << std::endl;
	out << "########' `###########V      ,###########################V',#" << std::endl;
	out << "######V'   ###########l      ,####################V~~~~'',###" << std::endl;
	out << "#####V'    ###########l      ##P' ###########V~~'   ,A#######" << std::endl;
	out << "#####l      d#########l      V'  ,#######V~'       A#########" << std::endl;
	out << "#####l      ##########l         ,####V''         ,###########" << std::endl;
	out << "#####l        `V######l        ,###V'   .....;A##############" << std::endl;
	out << "#####A,         `######A,     ,##V' ,A#######################" << std::endl;
	out << "#######A,        `######A,    #V'  A########'''''##########''" << std::endl;
	out << "##########,,,       `####A,           `#''           '''  ,,," << std::endl;
	out << "#############A,                               ,,,     ,######" << std::endl;
	out << "######################oooo,                 ;####, ,#########" << std::endl;
	out << "##################P'                   A,   ;#####V##########" << std::endl;
	out << "#####P'    ''''       ,###             `#,     `V############" << std::endl;
	out << "##P'                ,d###;              ##,       `V#########" << std::endl;
	out << "##########A,,   #########A              )##,    ##A,..,ooA###" << std::endl;
	out << "#############A, Y#########A,            )####, ,#############" << std::endl;
	out << "###############A ############A,        ,###### ##############" << std::endl;
	out << "###############################       ,#######V##############" << std::endl;
	out << "###############################      ,#######################" << std::endl;
	out << "##############################P    ,d########################" << std::endl;
	out << "##############################'    d#########################" << std::endl;
	out << "##############################     ##########################" << std::endl;
	out << "##############################     ##########################" << std::endl;
	out << "#############################P     ##########################" << std::endl;
	out << "#############################'     ##########################" << std::endl;
	out << "############################P      ##########################" << std::endl;
	out << "###########################P'     ;##########################" << std::endl;
	out << "###########################'     ,###########################" << std::endl;
	out << "##########################       ############################" << std::endl;
	out << "#########################       ,############################" << std::endl;
	out << "########################        d###########P'    `Y#########" << std::endl;
	out << "#######################        ,############        #########" << std::endl;
	out << "######################        ,#############        #########" << std::endl;
	out << "#####################        ,##############b.    ,d#########" << std::endl;
	out << "####################        ,################################" << std::endl;
	out << "###################         #################################" << std::endl;
	out << "##################          #######################P'  `V##P'" << std::endl;
	out << "#######P'     `V#           ###################P'" << std::endl;
	out << "#####P'                    ,#################P'" << std::endl;
	out << "###P'                      d##############P''" << std::endl;
	out << "##P'                       V##############'" << std::endl;
	out << "#P'                         `V###########'" << std::endl;
	out << "#'                             `V##P'" << std::endl;
	out.close();
}