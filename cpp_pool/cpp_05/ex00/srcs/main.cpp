/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:06:25 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/01 15:21:03 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat test("ChuckNoShark", 1);

	std::cout << test << std::endl;

	try
	{
		Bureaucrat b("BabyShark", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat b("ChuckNoShark", 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << test << std::endl;

	test.decrementGrade(55);

	std::cout << std::endl;

	std::cout << test << std::endl;

	try
	{
		Bureaucrat b("DadyShark", 152);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	return (0);
}
