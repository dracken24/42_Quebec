/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:37:29 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 21:13:58 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/HumanA.hpp"
#include "../../includes/Weapon.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon) : _Name(Name), _Weapon(Weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void    HumanA::Attack(void)
{
	std::cout << this->_Name << " attacks with their " << _Weapon.GetType() << std::endl;
}
