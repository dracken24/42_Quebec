/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:13:26 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 13:22:08 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Zombie.hpp"

void	RandomChump(std::string name)
{
	Zombie	zombie;
	
	zombie.AddName(name);
	zombie.Announce();
}
