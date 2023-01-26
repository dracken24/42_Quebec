/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:41 by nadesjar          #+#    #+#             */
/*   Updated: 2023/01/11 00:14:37 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	int			cmd;
	int			i = 1;
	int 		nbr_ct = 1;
	
	while (i >= 1)
	{
		cmd = repertoire.ChooseAction();
		if (cmd == 1)
		{
			repertoire.Add(i);
			if (nbr_ct <=8)
				nbr_ct++;
			if (i >= 8)
				i = 1;
			else
				i++;
		}
		else if (cmd == 2)
			repertoire.SearchContacts(&repertoire, nbr_ct);
		if (cmd == 3)
			break;
	}
	return (0);
}
