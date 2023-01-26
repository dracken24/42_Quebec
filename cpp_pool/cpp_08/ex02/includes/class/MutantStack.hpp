/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:10:31 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 21:37:56 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>()
		{
			// std::cout << "MutantStack Default Constructor called" << std::endl;

			return ;
		}
		
		MutantStack(MutantStack const &src) : std::stack<T>(src)
		{
			// std::cout << "MutantStack Copy Constructor called" << std::endl;
			this->c = src.c;
			
			return ;
		}
		virtual ~MutantStack(void)
		{
			// std::cout << "MutantStack Destructor called" << std::endl;

			return ;
		}

		MutantStack	&operator=(MutantStack const &src)
		{
			// std::cout << "MutantStack Assignation Operator called" << std::endl;
			this->c = src.c;

			return (*this);
		}

		typedef typename std::deque<T>::iterator iterator;

	// Iterators //
		iterator	begin(void)
		{
			return (this->c.begin());
		}
		
		iterator	end(void)
		{
			return (this->c.end());
		}
};

#endif
