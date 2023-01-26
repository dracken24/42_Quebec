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

#include "../../includes/class/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "Default ScavTrap constructor ScavTrap" << std::endl;

    _hit = 100;
    _energy = 50;
    _attack = 20;

    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default ScavTrap constructor with name called" << std::endl;

    _hit = 100;
    _energy = 50;
    _attack = 20;

    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;

    *this = src;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap called" << std::endl;

    return;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &src)
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

/********************************************************************************/

void    ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << _name << " attacks " << target
        << ", causing " << _attack << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}
