/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:22:59 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/17 18:30:30 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/A.hpp"
#include "../includes/class/B.hpp"
#include "../includes/class/C.hpp"
#include <iostream>
#include <cstdlib>

Base    *generate(void)
{	
	int     random = rand() % 3;
	Base    *base;

	if (random == 0)
		base = new A;
	else if (random == 1)
		base = new B;
	else if (random == 2)
		base = new C;
	else base = NULL;
	
	return (base);
}

void    identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void    identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}

int     main(void)
{
	srand(time(NULL));
	Base    *base = generate();

	identify(base);
	identify(*base);
	
	if (base)
		delete base;
	return (0);
}
