/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:36:23 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 19:49:47 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/template/EasyFind.hpp"

int	main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(44);
	v.push_back(12);
	v.push_back(7);
	v.push_back(53);
	
	std::cout << "Vector: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "Found 1: " << *easyfind(v, 44) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	
	try
	{
		std::cout << "Found 2: " << *easyfind(v, 53) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

	try
	{
		std::cout << "Found 3: " << *easyfind(v, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

/*************************************************************************************/

	std::vector<std::string> str;
	str.push_back("Hello");
	str.push_back("World");
	str.push_back("!");
	str.push_back("How");
	str.push_back("are");
	str.push_back("you");
	
	std::cout << std::endl;

	std::cout << "Vector: ";
	for (std::vector<std::string>::iterator it = str.begin(); it != str.end(); it++)
		std::cout << *it << " ";
	
	std::cout << std::endl << std::endl;
	try
	{
		std::cout << "Found 1: " << *easyfind(str, "World") << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

	try
	{
		std::cout << "Found 2: " << *easyfind(str, "you") << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

	try
	{
		std::cout << "Found 3: " << *easyfind(str, "babyshark") << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	
	return 0;
}
