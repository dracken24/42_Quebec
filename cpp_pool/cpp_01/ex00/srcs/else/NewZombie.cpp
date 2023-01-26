/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/25 13:09:48 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Zombie.hpp"

Zombie	*NewZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->AddName(name);

	return (zombie);
}
