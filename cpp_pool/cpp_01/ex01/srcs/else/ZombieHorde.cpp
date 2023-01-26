/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:41:24 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/23 19:22:28 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie	*horde;
	
	horde = new Zombie[N];
	for (int i = 0; i < N ; i++)
	{
		horde[i].AddName(name);
	}

	return (horde);
}
