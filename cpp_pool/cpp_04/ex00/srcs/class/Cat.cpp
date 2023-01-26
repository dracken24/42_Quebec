/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:46:27 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 17:54:47 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called" << std::endl;

    this->_type = "Cat";
    this->_sound = "Miiiaaaooooooouuuuuuuuuu";

    return ;
}

Cat::Cat(Cat const &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;

    return ;
}

Cat::~Cat(void)
{
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
    }

    return (*this);
}

/********************************************************************/

void    Cat::makeSound(void) const
{
    std::cout << this->_sound << std::endl;

    return ;
}
