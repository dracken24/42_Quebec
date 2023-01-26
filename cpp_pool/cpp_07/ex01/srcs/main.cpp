/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:44:32 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 15:04:34 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/template/iter.hpp"

int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	
	::iter(array, 5, print);
	std::cout << std::endl;

	std::string str[7] = {"Hello", "World", "!", "I", "am", "a", "string"};
	std::cout << std::endl;

	::iter(str, 7, print);
	std::cout << std::endl;
	::iter(str, 4, print);
	return 0;
}
