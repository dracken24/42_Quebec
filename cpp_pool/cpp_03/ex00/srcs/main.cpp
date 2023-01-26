/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:16:21 by nadesjar          #+#    #+#             */
/*   Updated: 2022/12/07 02:49:07 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/ClapTrap.hpp"

void	printPlayer(ClapTrap *player)
{
	std::cout << "Name: " << player->returnName() << std::endl;
	std::cout << "Hit: " << player->returnHit() << std::endl;
	std::cout << "Energy: " << player->returnEnergy() << std::endl;
	std::cout << "Attack: " << player->returnAttack() << std::endl;
}

int main(void)
{
	ClapTrap	first;
	ClapTrap	second("Tony");

	std::cout << std::endl;
	printPlayer(&first);
	std::cout << std::endl;
	printPlayer(&second);
	std::cout << std::endl;

	first.attack(second.returnName());
	second.takeDamage(8);
	first.beRepaired(3);

	std::cout << std::endl;
	printPlayer(&first);
	std::cout << std::endl;
	printPlayer(&second);
	std::cout << std::endl;

	return (0);
}
