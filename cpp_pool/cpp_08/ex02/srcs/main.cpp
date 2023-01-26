/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:19:33 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 21:39:42 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class/MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(17);
	mstack.push(5);
	mstack.push(3);
	mstack.push(0);
	mstack.push(737);
	mstack.push(24);
	
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;

	std::cout << std::endl;
	
	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;

/*************************************************************************/

	MutantStack<float>	mstack2;
	
	for (int i = 0; i < 10; i++)
		mstack2.push(i + 0.5f);
		
	MutantStack<float>::iterator	it2 = mstack2.begin();
	MutantStack<float>::iterator	ite2 = mstack2.end();
	for (int i = 0; it2 < ite2; i++)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	
	return (0);
}
