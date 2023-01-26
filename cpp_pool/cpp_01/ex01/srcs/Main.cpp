/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:25:09 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/23 21:56:22 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie		*horde;
	int			nbr;
	std::string	name;
	
	if (argc == 3)
	{
		nbr = atoi(argv[1]);
		name = argv[2];
	}
	else
	{
		nbr = 6;
		name = "Baby Shark";
	}
	
	horde = ZombieHorde(nbr, name);
	for (int i = 0; i < nbr; i++)
	{
		// std::cout << i+1 << " :";
		horde[i].Annoncer();
	}
	
	delete[] horde;
	return (0);
}