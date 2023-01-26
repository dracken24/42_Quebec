/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 04:37:20 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/12 05:41:27 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::Complain(std::string Level)
{
	FPointer[0] = &Harl::Debug;
	FPointer[1] = &Harl::Info;
	FPointer[2] = &Harl::Warning;
	FPointer[3] = &Harl::Error;
	
	std::string StrLevel[] = {"Debug", "Info", "Warning", "Error"};
	
	for (int i = 0; i < 4; i++)
	{
		if (Level == StrLevel[i])
			(this->*FPointer[i])();
	}
}

void	Harl::Debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
		<< "ketchup burger. I really do !" << std::endl;
}

void	Harl::Info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
		<< "enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::Warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming"
		<< "for years whereas you started working here since last month." << std::endl;
}

void	Harl::Error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
