/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:30:56 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 18:32:16 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual	~Animal(void);

		Animal			&operator=(Animal const & rhs);

		virtual void	makeSound(void) const = 0;
		
		std::string		getType(void) const;

	protected:
		std::string	_type;
		std::string	_sound;
};

#endif
