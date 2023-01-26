/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:37:20 by dantremb          #+#    #+#             */
/*   Updated: 2022/10/01 14:28:49 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosopher.h"

void	ft_drop_fork(t_philo *philo, int fork1, int fork2)
{
	pthread_mutex_unlock(&philo->mutex[fork1]);
	pthread_mutex_unlock(&philo->mutex[fork2]);
}

void	ft_take_a_fork(t_philo *philo, int fork)
{
	pthread_mutex_lock(&philo->mutex[fork]);
	printf("%lu %d has taken a fork\n", ft_get_ms(philo), philo->nbr);
}

int	ft_one(t_philo *philo)
{
	printf("%lu %d has taken a fork\n", ft_get_ms(philo), philo->nbr);
	while (philo->table->dead_status != 1)
		ft_shinigami(philo->table, philo);
	return (true);
}

void	ft_eat(t_philo *philo)
{
	ft_take_a_fork(philo, philo->nbr - 1);
	ft_take_a_fork(philo, philo->nbr % philo->table->nbr_philo);
	philo->last_meal = ft_get_time();
	printf("%lu %d is eating!\n", ft_get_ms(philo), philo->nbr);
	ft_sleep(philo->last_meal + philo->table->tte, philo);
	ft_drop_fork(philo, philo->nbr - 1,
		philo->nbr % philo->table->nbr_philo);
}

t_philo	*ft_init_eating(void *arg)
{
	t_philo	*philo;

	philo = arg;
	if (philo->nbr % 2 == 0)
		usleep(philo->table->ttd * 100);
	philo->last_meal = ft_get_time();
	return (philo);
}
