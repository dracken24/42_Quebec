/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:37:33 by dracken24         #+#    #+#             */
/*   Updated: 2022/12/30 15:12:01 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Animal.hpp"

Animal::Animal(void) :
_type("None,... Maybe a ghost !?!"),
_sound("No sound, i'm just an animal with no type !!")
{
    std::cout << "Animal constructor called" << std::endl;

    return ;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;

    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;

    return ;
}

Animal	&Animal::operator=(Animal const & rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_sound = rhs._sound;
    }

    return (*this);
}

/* ************************************************************************** */

void    Animal::makeSound(void) const
{
    std::cout << this->_sound << std::endl;

    return ;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}
