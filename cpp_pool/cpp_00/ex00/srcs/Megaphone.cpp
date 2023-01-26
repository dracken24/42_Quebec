/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:24:59 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/25 14:44:53 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	k;
	
	i = 0;
	if (argc > 1)
	{
		while (argv[++i])
		{
			k = -1;
			while (argv[i][++k])
			{
				if (argv[i][k] >= 'a' && argv[i][k] <= 'z')
					argv[i][k] -= 32;
				std::cout << argv[i][k];
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
