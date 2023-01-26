/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:51:24 by nadesjar          #+#    #+#             */
/*   Updated: 2022/10/12 05:42:25 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harl;

	if (argc == 2)
	{
		Harl.Complain(argv[1]);
	}
	else
	{
		Harl.Complain("Debug");
		Harl.Complain("Info");
		Harl.Complain("Warning");
		Harl.Complain("Error");
	}

	return (0);
}
