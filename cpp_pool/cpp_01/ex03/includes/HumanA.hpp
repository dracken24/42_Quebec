/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:42:55 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 21:14:14 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# include <iostream>
# include <string>

class HumanA
{
	public:
		HumanA(std::string Name, Weapon &);
		~HumanA(void);
		void		Attack(void);
		
	private:
		std::string _Name;
		Weapon		&_Weapon;
};

#endif