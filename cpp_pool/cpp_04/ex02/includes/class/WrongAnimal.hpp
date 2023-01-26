/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:19:01 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/06 18:10:37 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const& copy);
        ~WrongAnimal();
        
        WrongAnimal &operator=(WrongAnimal const &copy);

        void makeSound() const;
        std::string getType() const;

    protected:
        std::string _type;
        std::string _sound;
};

#endif
