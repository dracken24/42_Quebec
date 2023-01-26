/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dracken24 <dracken24@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:10:20 by dracken24         #+#    #+#             */
/*   Updated: 2023/01/07 10:29:32 by dracken24        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "../includes/class/Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Need one argument! ex: " << av[0] << " 24.2442f" << std::endl;
		return (1);
	}
	Convert conv(av[1]);
	conv.printConversion();
	return (0);
}