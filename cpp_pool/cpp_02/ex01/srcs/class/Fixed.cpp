/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:00:58 by nadesjar          #+#    #+#             */
/*   Updated: 2023/01/11 00:16:24 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Fixed.hpp"

Fixed::Fixed(void) :
_nbr(0)
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

Fixed::Fixed(int const nbr) : _nbr(nbr << _nbrBits)
{
	std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Fixed::Fixed(const float f) : _nbr(roundf(f * (float)(1 << _nbrBits)))
{
	std::cout << "Float constructor called" << std::endl;

	return ;
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

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignment operator called" << std::endl;
	
	if (this != &src)
		this->_nbr = src.getRawBits();

	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)_nbr / (float)(1 << _nbrBits));
}

int		Fixed::toInt(void) const
{
	return ((int)_nbr / (int)(1 << _nbrBits));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}
