/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:48:21 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/11 16:04:26 by nadesjar         ###   ########.fr       */
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

		void	Annoncer(void);
		void	AddName(std::string new_name);
		
	
	private:
		std::string name;
};

Zombie	*ZombieHorde(int N, std::string name);
	
#endif
