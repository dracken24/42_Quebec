/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:17:53 by nadesjar          #+#    #+#             */
/*   Updated: 2022/09/01 16:47:58 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 			1=red 2=green 3=yellow 4=blue 5=purple 6=cyan 7=white 8=reset	  */

#include "../libft.h"

#include <stdio.h>

void	ft_color(int color)
{
	if (color == 1)
		printf("\033[1;31m");
	else if (color == 2)
		printf("\033[1;32m");
	else if (color == 3)
		printf("\033[1;33m");
	else if (color == 4)
		printf("\033[1;34m");
	else if (color == 5)
		printf("\033[1;35m");
	else if (color == 6)
		printf("\033[1;36m");
	else if (color == 7)
		printf("\033[1;37m");
	else if (color == 8)
		printf("\033[0m");
}
