/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:47:30 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/12 06:19:55 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	Harl;

	if (argc == 2)
	{
		Harl.Complain(argv[1]);
	}
	else
	{
		std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
	}

	return (0);
}
