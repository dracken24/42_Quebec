/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:06:21 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/15 13:01:21 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"
#include <fcntl.h>

int	main(int entry, char **name)
{
	t_game	game;

	check_entry(entry, name, &game);
	init_var(&game);
	init_game(&game);
	kill_game(&game, "Error");
	return (0);
}

void	check_entry(int entry, char **name, t_game *game)
{
	if (entry != 2)
	{
		ft_printf("Error\nWrong arguments numbers");
		exit(-1);
	}
	if (check_name(game, name[1]) == 0)
	{
		ft_printf("Error\nInvalid files <name>.ber");
		exit(-1);
	}
	save_map(game, name[1]);
	check_doub(game);
	check_rect(game);
	check_board(game);
}

void	save_map(t_game *game, char *name)
{
	save_len(game, name);
	game->map_0 = ft_calloc(sizeof(char), (game->len.len_map_x
				* game->len.len_map_y) + game->len.len_map_y);
	if (!game->map_0)
	{
		free(game->map_0);
		ft_printf("Error\nwrong malloc <map_0>");
		exit(-1);
	}
	game->ct.i = -1;
	while (++game->ct.i < game->len.len_map_y)
	{
		game->map_0[game->ct.i] = game->tmp[game->ct.i];
	}
	free(game->tmp);
}

void	check_rect(t_game *game)
{
	int	i;
	int	len;
	int	last_len;

	i = -1;
	last_len = ft_strlen(game->map_0[game->len.len_map_y - 1]) + 1;
	if (last_len != (int)ft_strlen(game->map_0[0])
		&& game->map_0[game->len.len_map_y - 1][game->len.len_map_x] != '\n')
	{
		free(game->map_0);
		ft_printf("Error\nMap not rectangle");
		exit(-1);
	}
	while (++i < game->len.len_map_y)
	{
		len = (int)ft_strlen(game->map_0[i]);
		if (len != game->len.len_map_x + 1)
		{
			if (len == game->len.len_map_x)
				return ;
			free(game->map_0);
			ft_printf("Error\nMap not rectangle");
			exit(-1);
		}
	}
}

void	check_board(t_game *game)
{
	int	i;
	int	k;

	game->ct.error = 1;
	i = -1;
	while (++i < game->len.len_map_y)
	{
		k = -1;
		while (game->map_0[i][++k] != '\n' && game->map_0[i][++k] != '\0')
		{
			if (game->map_0[0][k] != CASE_1 && game->map_0[0][k] != '\n')
				game->ct.error = 0;
			else if (game->map_0[i][0] != CASE_1
					|| game->map_0[i][game->len.len_map_x - 1] != CASE_1)
				game->ct.error = 0;
			else if (game->map_0[game->len.len_map_y - 1][k] != CASE_1
					&& game->map_0[game->len.len_map_y - 1][k] != '\0'
					&& game->map_0[game->len.len_map_y - 1][k] != '\n')
				game->ct.error = 0;
		}
	}
	if (game->ct.error == 0)
		quit_check(game, "Error\nboarder not ok");
}
