/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:44:49 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 13:51:02 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog constructor called" << std::endl;

    this->_type = "Dog";
    this->_sound = "WOOF";
    this->_brain = new Brain();

    return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
    this->_brain = new Brain();

    for (int i = 0; i < 100; i++)
        this->_brain[i] = src._brain[i];

    return ;
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;

    return ;
}

Dog &Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_sound = rhs._sound;
        for (int i = 0; i < 100; i++)
			this->_brain[i] = rhs._brain[i];
    }

    return (*this);
}

/* ************************************************************************** */

void Dog::makeSound(void) const
{
    std::cout << this->_sound << std::endl;

    return ;
}
