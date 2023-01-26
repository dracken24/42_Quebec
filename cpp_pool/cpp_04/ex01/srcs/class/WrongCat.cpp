/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:31:57 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 13:55:39 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
	this->_brain = new Brain();
	
	return ;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain();

	for (int i = 0; i < 100; i++)
		this->_brain[i] = copy._brain[i];

	return ;
}

WrongCat::~WrongCat()
{
	delete this->_brain;
	std::cout << "WrongCat destructor called" << std::endl;

	return ;
}

WrongCat& WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this == &copy)
	{
		this->_type = copy._type;
		this->_sound = copy._sound;
		for (int i = 0; i < 100; i++)
			this->_brain[i] = copy._brain[i];
	}

	return *this;
}

//***************************************************************************************

void    WrongCat::makeSound(void) const
{
	std::cout << this->_sound << std::endl;

	return ;
}
