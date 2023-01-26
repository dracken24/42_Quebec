/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:46:09 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 21:26:31 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# include <iostream>
# include <string>

class HumanB
{
	public:
		HumanB(std::string Name);
		~HumanB(void);
		void		attack(void);
		void		SetWeapon(Weapon &Wapon);
		
	private:
		std::string _Name;
		Weapon		*_Weapon;
};

#endif
