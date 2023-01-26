/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:37:20 by dantremb          #+#    #+#             */
/*   Updated: 2022/10/01 12:56:26 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosopher.h"

long int	ft_get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

long int	ft_get_ms(t_philo *philo)
{
	return (ft_get_time() - philo->table->time);
}

int	ft_check_minimum_value(char **argv)
{
	if (ft_atol_pos(argv[1]) == 0)
	{
		ft_print_color(1, "You need at least 1 philosopher\n");
		return (1);
	}
	if (ft_atol_pos(argv[1]) > 200)
	{
		ft_print_color(1, "You need less than 200 philosopher\n");
		return (1);
	}
	if (argv[5] && ft_atol_pos(argv[5]) == 0)
	{
		ft_print_color(1, "You need at least 1 turn to eat\n");
		return (1);
	}
	return (0);
}

void	ft_color(int color)
/*  1=red 2=green 3=yellow 4=blue 5=purple 6=cyan 7=white 8=reset	*/
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

void	ft_print_color(int color, char *message)
{
	ft_color(color);
	printf("%s", message);
	ft_color(8);
}
