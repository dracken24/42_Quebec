/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:25:58 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 18:35:18 by dracken24        ###   ########.fr       */
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
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl; // Type dog
	std::cout << i->getType() << " " << std::endl; // Type cat
	std::cout << meta->getType() << " " << std::endl; // No Type

	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	
	meta->makeSound(); //will output Animal sound!
	
	std::cout << std::endl;

	const WrongAnimal	*wrongAnimal = new WrongAnimal();
	const WrongAnimal	*wrongCat = new WrongCat();

	std::cout << std::endl;

	std::cout << wrongAnimal->getType() << " " << std::endl; // Type WrongAnimal
	std::cout << wrongCat->getType() << " " << std::endl; // Type WrongCat

	std::cout << std::endl;

	wrongAnimal->makeSound(); //will output the WrongAnimal sound!
	wrongCat->makeSound(); //will output the WrongCat sound!

	std::cout << std::endl;

	delete wrongAnimal;
	delete wrongCat;

	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;

	return (0);
}
