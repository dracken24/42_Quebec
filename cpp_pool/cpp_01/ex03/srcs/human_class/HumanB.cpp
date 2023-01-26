/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:55:08 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 21:26:25 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/HumanB.hpp"

HumanB::HumanB(std::string Name) : _Name(Name), _Weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	if (_Weapon)
		std::cout << this->_Name << " attacks with their " << _Weapon->GetType() << std::endl;
	else
		std::cout << this->_Name << " attacks with no weapon "  << std::endl;
}

void	HumanB::SetWeapon(Weapon &Weapon)
{
	_Weapon = &Weapon;
}
