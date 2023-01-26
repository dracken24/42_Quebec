/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:59:55 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 21:29:06 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	{
		Weapon Sword = Weapon("Cursed Sword");

		HumanA	BabyShark("BabyShark", Sword);
		BabyShark.Attack();
		Sword.SetType("Mega Cursed Sword");
		BabyShark.Attack();
	}
	{
		Weapon	Bow = Weapon("LongBow");

		HumanB Chuck("ChuckNoshark");
		Chuck.SetWeapon(Bow);
		Chuck.attack();
		Bow.SetType("Big MADAFAKA Bow");
		Chuck.attack();
	}

	return (0);
}
