/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:45:56 by dracken24         #+#    #+#             */
/*   Updated: 2022/12/30 18:39:08 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public virtual Animal
{
    public:
        Cat(void);
        Cat(Cat const & src);
        virtual	~Cat(void);

        Cat	&operator=(Cat const & rhs);

        virtual void makeSound(void) const;
    
    private:
        Brain *_brain;
};

#endif
