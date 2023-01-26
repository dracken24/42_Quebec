/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:35:51 by dantremb          #+#    #+#             */
/*   Updated: 2022/10/06 11:09:14 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosopher.h"

void	*ft_eating(void *arg)
{
	t_philo	*philo;

	philo = ft_init_eating(arg);
	if (philo->table->nbr_philo == 1 && ft_one(philo) == true)
		return (NULL);
	while (1)
	{
		if (philo->eated_meal == philo->table->meal_count)
			break ;
		ft_eat(philo);
		printf("%lu %d is sleeping\n", ft_get_ms(philo), philo->nbr);
		ft_sleep(philo->last_meal + philo->table->tts
			+ philo->table->tte, philo);
		printf("%lu %d is thinking\n", ft_get_ms(philo), philo->nbr);
		ft_sleep(((philo->last_meal + philo->table->ttd) / 100) * 90, philo);
		philo->eated_meal += 1;
		if (ft_shinigami(philo->table, philo) == true)
			return (NULL);
	}
	return (NULL);
}

void	ft_sleep(long int time_to_stop, t_philo *philo)
{
	long int	delay;

	while (1)
	{
		delay = time_to_stop - ft_get_time();
		if (delay <= 0)
			break ;
		usleep(50);
		if (ft_shinigami(philo->table, philo) == true)
			return ;
	}
}

int	ft_shinigami(t_table *table, t_philo *philo)
{
	if (table->dead_status == 1)
		return (true);
	pthread_mutex_lock(&table->death);
	if (ft_get_time() - philo->last_meal
		> table->ttd && table->dead_status == 0)
	{
		table->dead_status = 1;
		table->who_is_dead = philo->nbr;
		return (true);
	}
	pthread_mutex_unlock(&table->death);
	return (false);
}

int	ft_dinner(t_table *table, t_philo *philo)
{
	int		i;

	i = -1;
	table->chair = malloc(sizeof(pthread_t) * table->nbr_philo);
	if (!table->chair)
		return (1);
	while (++i < table->nbr_philo)
		if (pthread_create(&table->chair[i], NULL, &ft_eating, &philo[i]) != 0)
			return (1);
	i = -1;
	while (++i < table->nbr_philo)
		if (pthread_join(table->chair[i], NULL) != 0)
			return (1);
	if (table->dead_status == 1)
	{
		ft_color(1);
		printf("%lu %d is dead\n", ft_get_time()
			- table->time, table->who_is_dead);
		ft_color(8);
	}
	return (0);
}
