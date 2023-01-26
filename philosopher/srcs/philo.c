/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:48:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/26 13:03:44 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosopher.h"

int	main(int argc, char **argv)
{
	t_table	table;
	t_philo	*philo;

	if (argc < 5 || argc > 6)
	{
		ft_color(1);
		printf("|    1    |   2   |   3   |    4   |  5-(optionnel) |\n");
		printf("|-{philo}-|-{die}-|-{eat}-|-{sleep}|---{nbr-turn}---|\n");
		ft_color(8);
		return (1);
	}
	if (ft_check_entry(argv) == 1)
		return (1);
	ft_init_table(&table, argc, argv);
	philo = ft_init_philo(&table);
	if (!philo)
		return (1);
	ft_dinner(&table, philo);
	if (table.chair)
		free (table.chair);
	free(philo->mutex);
	free(philo);
	return (0);
}

int	ft_check_entry(char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (argv[++i])
	{
		k = -1;
		while (argv[i][++k])
		{
			if (argv[i][k] == '-')
				k++;
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				ft_print_color(1, "Invalid entry\n");
				return (1);
			}
		}
		if (ft_check_numbers(argv, i) == 1)
			return (1);
	}
	return (ft_check_minimum_value(argv));
}

int	ft_check_numbers(char **argv, int i)
{
	if (ft_atol_pos(argv[i]) > MAXINT || ft_atol_pos(argv[i]) < MININT)
	{
		ft_print_color(1, "Arguments over INTMIN or INTMAX\n");
		return (1);
	}
	else if (ft_atol_pos(argv[i]) < 0)
	{
		ft_print_color(1, "Arguments not positive\n");
		return (1);
	}
	return (0);
}
