/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:43:44 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 11:03:17 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Convert.hpp"

Convert::Convert(void)
{
	return ;
}

Convert::Convert(std::string const &str) :
_str(str),
_isNumber(false)
{
	this->detectType();

	return ;
}

Convert::Convert(Convert const &src) :
_str(src._str),
_nbr(src._nbr),
_isNumber(src._isNumber)
{
	return ;
}

Convert::~Convert()
{
	return ;
}

Convert &Convert::operator=(Convert const &src)
{
	if (this != &src)
	{
		this->_nbr = src._nbr;
		this->_isNumber = src._isNumber;
	}
	return *this;
}

/*************************************************************************/

void	Convert::detectType()
{
	std::stringstream	ss;

	ss << this->_str;
	ss >> this->_nbr;
	if (ss.eof() && !ss.fail())
		this->_isNumber = true;
}

void	Convert::printConversion()
{
	if (this->_isNumber)
	{
		std::cout << "char: ";
		if (this->_nbr >= 0 && this->_nbr <= 127)
			std::cout << "'" << static_cast<char>(this->_nbr) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(this->_nbr) << std::endl;
		std::cout << "float: " << static_cast<float>(this->_nbr) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(this->_nbr) << std::endl;
		return ;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}
