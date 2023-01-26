/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:46:27 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 13:58:52 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;

	this->_type = "Cat";
	this->_sound = "Miiiaaaooooooouuuuuuuuuu";
	this->_brain = new Brain();

	return ;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	this->_brain = new Brain();

	for (int i = 0; i < 100; i++)
		this->_brain[i] = src._brain[i];

	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;

	return ;
}

Cat &Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_sound = rhs._sound;
		for (int i = 0; i < 100; i++)
			this->_brain[i] = rhs._brain[i];
	}

	return (*this);
}

/****************************************************************************/

void    Cat::makeSound(void) const
{
	std::cout << this->_sound << std::endl;

	return ;
}
