/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:18:43 by dracken24         #+#    #+#             */
/*   Updated: 2022/12/30 15:35:01 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->_type = "WrongAnimal";
	this->_sound = "WrongAnimal sound";

	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;

	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;

	return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy._type;
		this->_sound = copy._sound;
	}

	return *this;
}

//***************************************************************************************

void WrongAnimal::makeSound() const
{
	std::cout << this->_sound << std::endl;

	return ;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}
