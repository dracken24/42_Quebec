/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:53:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/23 19:22:34 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie create" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destroy" << std::endl;
}

void	Zombie::Annoncer(void)
{
	std::cout << this->name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::AddName(std::string new_name)
{
	this->name = new_name;
}
