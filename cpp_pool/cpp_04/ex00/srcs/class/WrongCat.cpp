/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:31:57 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 17:56:02 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
    
    return ;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;

    return ;
}

WrongCat::~WrongCat()
{
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
    }

    return *this;
}

/********************************************************************/

void    WrongCat::makeSound(void) const
{
    std::cout << this->_sound << std::endl;

    return ;
}
