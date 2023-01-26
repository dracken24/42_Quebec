/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:11:54 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/15 13:08:48 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	check_doub(t_game *game)
{
	int	i;
	int	k;

	i = -1;
	while (game->map_0[++i])
	{
		k = -1;
		while (game->map_0[i][++k])
		{
			if (game->map_0[i][k] == '0' || game->map_0[i][k] == '1'
					|| game->map_0[i][k] == 'P' || game->map_0[i][k] == 'C'
					|| game->map_0[i][k] == 'E' || game->map_0[i][k] == 'B'
					|| game->map_0[i][k] == '\n' || game->map_0[i][k] == 'Z')
				continue ;
			else
			{
				quit_check(game, "Error\nWrong character in map");
			}
		}
	}
}

void	quit_check(t_game *game, char *str)
{
	free_ptr(game->map_0);
	ft_printf("%s\n", str);
	exit(0);
}
