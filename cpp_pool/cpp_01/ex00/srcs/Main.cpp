/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:25:09 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 13:22:11 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/Zombie.hpp"

int	main(void)
{
	Zombie	zombie;
	zombie.AddName("Bob");
	zombie.Announce();
	
	Zombie	*zombie2 = NewZombie("Chuck Noshark");
	zombie2->Announce();

	RandomChump("Baby Shark");
	delete(zombie2);
	return (0);
}