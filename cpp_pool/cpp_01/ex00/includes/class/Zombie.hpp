/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:48:21 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 16:03:57 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void	AddName(std::string name);
		std::string RetName(void);
		void	Announce(void);
		
	
	private:
		
		std::string name;
};

void	RandomChump(std::string name);
Zombie *NewZombie(std::string name);

#endif
