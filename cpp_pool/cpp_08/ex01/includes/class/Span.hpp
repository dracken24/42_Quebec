/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:55:38 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/24 11:29:53 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <list>

class Span
{
	public:
		Span(uint nbr);
		Span(Span const & src);
		~Span(void);

		Span	&operator=(Span const & src);

	// Setters //
		void	addNumber(int nbr);
		
	// Getters //
		int		shortestSpan(void);
		int		longestSpan(void);

	// Exceptions //
		class SpanFullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Span is full";
				}
		};

		class SpanEqualException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Span is equal";
				}
		};

		class SpanNotEnoughException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Span doesn't have enough numbers";
				}
		};

	private:
		std::vector<int>	_container;
		uint				_maxSize;
		
		Span(void);
};

#endif
