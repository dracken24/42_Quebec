/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:05:09 by nadesjar          #+#    #+#             */
/*   Updated: 2022/12/19 16:09:16 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
_name("No name"),
_hit(10),
_energy(10),
_attack(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) :
_name(name),
_hit(10),
_energy(10),
_attack(0)
{
	std::cout << "Default constructor with name called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
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

//***************************************************************************************//

void	ClapTrap::attack(const std::string &target)
{
	if (_energy)
	std::cout << "ClapTrap attack " << target << ", causing ";
	std::cout << _attack << " point of damage" << std::endl;

	_energy--;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Enemy attack you from " << amount << " point of damage" << std::endl;

	_hit -= amount;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "You gain " << amount << " energy point" << std::endl;

	_energy += amount;

	return ;
}

//----------------------------------------------------------------------------------------//

std::string ClapTrap::returnName(void) const
{
	return (_name);
}

int		ClapTrap::returnHit(void) const
{
	return (_hit);
}

int		ClapTrap::returnEnergy(void) const
{
	return (_energy);
}

int		ClapTrap::returnAttack(void) const
{
	return (_attack);
}
