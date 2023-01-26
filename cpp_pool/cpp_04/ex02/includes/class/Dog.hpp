/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:40:49 by dracken24         #+#    #+#             */
/*   Updated: 2022/12/30 18:40:17 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public virtual Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual	~Dog(void);

		Dog	&operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
		
	private:
		Brain *_brain;
};

#endif
