/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:46:42 by dantremb          #+#    #+#             */
/*   Updated: 2022/10/06 11:09:16 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

# define MAXINT 2147483647
# define MININT -2147483648

typedef struct s_table
{
	long int		time;

	int				who_is_dead;
	int				nbr_philo;
	int				ttd;
	int				tte;
	int				tts;
	int				meal_count;
	int				dead_status;

	pthread_mutex_t	death;
	pthread_t		*chair;
}				t_table;

typedef struct s_philo
{
	int				eated_meal;
	int				nbr;

	long int		last_meal;

	pthread_mutex_t	*mutex;
	t_table			*table;
}				t_philo;

/**************************** FONCTIONS ****************************/

pthread_mutex_t	*ft_init_mutex(t_table *table);

t_philo			*ft_init_philo(t_table *table);
t_philo			*ft_init_eating(void *arg);

void			ft_init_table(t_table *table, int argc, char **argv);
void			ft_drop_fork(t_philo *philo, int fork1, int fork2);
void			ft_take_a_fork(t_philo *philo, int fork);
void			ft_print_color(int color, char *message);
void			ft_sleep(long int time_to_stop, t_philo *philo);
void			ft_eat(t_philo *philo);
void			*ft_eating(void *arg);
void			ft_color(int color);

long int		ft_get_ms(t_philo *philo);
long int		ft_get_time(void);

int				ft_shinigami(t_table *table, t_philo *philo);
int				ft_dinner(t_table *table, t_philo *philo);
int				ft_check_numbers(char **argv, int i);
int				ft_check_minimum_value(char **argv);
int				ft_check_entry(	char **argv);
int				ft_one(t_philo *philo);

long int		ft_atol_pos(const char *str);

#endif
