/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:37:20 by dantremb          #+#    #+#             */
/*   Updated: 2022/10/06 11:13:34 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosopher.h"

pthread_mutex_t	*ft_init_mutex(t_table *table)
{
	pthread_mutex_t	*mutex;
	int				i;

	i = -1;
	mutex = malloc(sizeof(pthread_mutex_t) * table->nbr_philo);
	if (!mutex)
		return (NULL);
	while (++i < table->nbr_philo)
	{
		if (pthread_mutex_init(&mutex[i], NULL) != 0)
		{
			free (mutex);
			return (NULL);
		}
	}
	if (pthread_mutex_init(&table->death, NULL) != 0)
	{
		free(mutex);
		return (NULL);
	}
	return (mutex);
}

t_philo	*ft_init_philo(t_table *table)
{
	t_philo			*philo;
	pthread_mutex_t	*mutex;
	int				i;

	mutex = ft_init_mutex(table);
	if (!mutex)
		return (NULL);
	philo = malloc(sizeof(t_philo) * table->nbr_philo);
	if (!philo)
	{
		free (mutex);
		return (NULL);
	}
	i = -1;
	while (++i < table->nbr_philo)
	{
		philo[i].nbr = i + 1;
		philo[i].table = table;
		philo[i].eated_meal = 0;
		philo[i].last_meal = 0;
		philo[i].mutex = mutex;
	}
	return (philo);
}

void	ft_init_table(t_table *table, int argc, char **argv)
{
	table->nbr_philo = ft_atol_pos(argv[1]);
	table->ttd = ft_atol_pos(argv[2]);
	table->tte = ft_atol_pos(argv[3]);
	table->tts = ft_atol_pos(argv[4]);
	if (argc == 6)
		table->meal_count = ft_atol_pos(argv[5]);
	else
		table->meal_count = -1;
	table->time = ft_get_time();
	if (table->tte < 3)
		table->tte = 3;
	if (table->ttd < 3)
		table->ttd = 3;
	if (table->tts < 3)
		table->tts = 3;
	table->dead_status = 0;
}
