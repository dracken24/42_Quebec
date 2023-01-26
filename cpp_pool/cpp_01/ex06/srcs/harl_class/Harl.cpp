/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 04:37:20 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/12 06:25:44 by nadesjar         ###   ########.fr       */
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

int		Harl::ReturnLevel(std::string Level, std::string StrLevel[])
{
	for (int i = 0; i < 4; i++)
	{
		if (StrLevel[i] == Level)
			return (i);
	}
	return (4);
}

void	Harl::Complain(std::string Level)
{
	std::string StrLevel[] = {"Debug", "Info", "Warning", "Error"};
	int Nbr = this->ReturnLevel(Level, StrLevel);

	FPointer[0] = &Harl::Debug;
	FPointer[1] = &Harl::Info;
	FPointer[2] = &Harl::Warning;
	FPointer[3] = &Harl::Error;
	
	for (int i = Nbr; i < 4; i++)
	{
		if (Level == StrLevel[i])
		{
			while (i < 4)
			{
				(this->*FPointer[i])();
				i++;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
}

void	Harl::Debug(void)
{
	std::cout << "[Debug]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
		<< "ketchup burger. I really do !" << std::endl << std::endl;
}

void	Harl::Info(void)
{
	std::cout << "[Info]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
		<< "enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void	Harl::Warning(void)
{
	std::cout << "[Warning]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming"
		<< "for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::Error(void)
{
	std::cout << "[Error]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}
