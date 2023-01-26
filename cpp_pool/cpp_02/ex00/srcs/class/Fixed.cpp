/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:00:58 by nadesjar          #+#    #+#             */
/*   Updated: 2022/12/05 14:56:00 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Fixed.hpp"

Fixed::Fixed(void) : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::Fixed(int const nbr) : _nbr(nbr)
{
	std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Fixed&	Fixed::operator=(const Fixed& src) 
{
	std::cout << "Assignation operator called" << std::endl;
	
	if (&src != this)
		_nbr = src.getRawBits();
	
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "SetRawBits called" << std::endl;
	this->_nbr = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits called" << std::endl;
	
	return (this->_nbr);
}
