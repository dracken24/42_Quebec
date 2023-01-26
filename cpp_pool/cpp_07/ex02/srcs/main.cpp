/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:44:32 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 15:25:45 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/template/Array.hpp"

int main(void)
{
	Array<int> array(5);
	
	for (unsigned int i = 0; i < 5; i++)
		array[i] = i;
	for (unsigned int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;
	std::cout << std::endl;

	Array<std::string> str(7);
	str[0] = "Hello";
	str[1] = "World";
	str[2] = "!";
	str[3] = "I";
	str[4] = "am";
	str[5] = "a";
	str[6] = "string";
	for (unsigned int i = 0; i < 7; i++)
		std::cout << str[i] << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < 4; i++)
		std::cout << str[i] << std::endl;
	std::cout << std::endl;

	Array<float> f(5);

	for (unsigned int i = 0; i < 5; i++)
		f[i] = i + 0.5;
	for (unsigned int i = 0; i < 5; i++)
		std::cout << f[i] << std::endl;
	return 0;
}
