/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:52:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 19:54:32 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _WeaponType(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string &Weapon::GetType()
{
	const std::string &str = _WeaponType;
	return (str);
}

void Weapon::SetType(std::string type)
{
	this->_WeaponType = type;
}
