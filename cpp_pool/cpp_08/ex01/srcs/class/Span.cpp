/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:57:58 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/09 13:29:42 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/class/Span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(uint nbr) :
_maxSize(nbr)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;
	
	return ;
}

Span::~Span(void)
{
	return ;
}

Span    &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_container = src._container;
		this->_maxSize = src._maxSize;
	}
	
	return *this;
}

/***********************************************************************/
// Setters //

void	Span::addNumber(int nbr)
{
	if (this->_container.size() >= this->_maxSize)
		throw Span::SpanFullException();
		
	this->_container.push_back(nbr);
}

/***********************************************************************/
// Getters //

int		Span::shortestSpan(void)
{
	if (this->_container.size() <= 1)
		throw Span::SpanNotEnoughException();

	std::vector<int>	tmp(this->_container);
	std::sort(tmp.begin(), tmp.end());
	
	int		min = tmp[1] - tmp[0];
	for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end(); it++)
	{
		if (min > (*it - *(it - 1)))
			min = *it - *(it - 1);
		if (min == 0)
			throw Span::SpanEqualException();
	}
	return min;
}

int		Span::longestSpan(void)
{
	if (this->_container.size() <= 1)
		throw Span::SpanNotEnoughException();
	
	std::vector<int>	tmp(this->_container);
	std::sort(tmp.begin(), tmp.end());
	
	return tmp[tmp.size() - 1] - tmp[0];
}


