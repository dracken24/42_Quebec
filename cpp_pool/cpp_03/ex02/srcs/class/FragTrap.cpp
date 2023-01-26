/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:31:29 by nadesjar          #+#    #+#             */
/*   Updated: 2022/12/20 14:11:08 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "Default FragTrap constructor FragTrap" << std::endl;

    _hit = 100;
    _energy = 100;
    _attack = 30;

    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default FragTrap constructor with name called" << std::endl;

    _hit = 100;
    _energy = 100;
    _attack = 30;

    return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;

    *this = src;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap called" << std::endl;

    return;
}

//***************************************************************************//

FragTrap    &FragTrap::operator=(const FragTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hit = src._hit;
        this->_energy = src._energy;
        this->_attack = src._attack;
    }
    return (*this);
}

void        FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " gives a high five" << std::endl;
}
