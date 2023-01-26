/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 04:30:24 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/12 06:13:23 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP

# include <string>
# include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	Complain(std::string Level);
		void	(Harl::*FPointer[4]) (void);
		int		ReturnLevel(std::string Level, std::string StrLevel[]);

	private:
		void	Debug(void);
		void	Info(void);
		void	Warning(void);
		void	Error(void);
};

#endif
