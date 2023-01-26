/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:02:01 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/09 16:13:27 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	
	return ;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	
	return (*this);
}

//****************************************************************************

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}
