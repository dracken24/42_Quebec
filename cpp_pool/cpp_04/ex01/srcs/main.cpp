/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:25:58 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/10 14:15:21 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/WrongAnimal.hpp"
#include "../includes/class/WrongCat.hpp"

#include "../includes/class/Animal.hpp"
#include "../includes/class/Dog.hpp"
#include "../includes/class/Cat.hpp"

#include <iostream>

int main(void)
{
	const Animal	*meute[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			meute[i] = new Dog();
		else
			meute[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << meute[i]->getType() << " " << std::endl;
		meute[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete meute[i];

	return (0);
}
