/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:45:56 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 17:52:58 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const & src);
        virtual	~Cat(void);

        Cat	&operator=(Cat const & rhs);

        virtual void	makeSound(void) const;

};

#endif
