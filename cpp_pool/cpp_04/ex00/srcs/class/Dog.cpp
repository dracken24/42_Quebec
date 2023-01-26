/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:44:49 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 17:55:07 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog constructor called" << std::endl;

    this->_type = "Dog";
    this->_sound = "WOOF";

    return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;

    return ;
}

Dog::~Dog(void)
{
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
    }

    return (*this);
}

/********************************************************************/

void    Dog::makeSound(void) const
{
    std::cout << this->_sound << std::endl;

    return ;
}
