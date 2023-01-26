/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:11:19 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/15 13:08:35 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

void	kill_main(t_game *game, int fd, char *str)
{
	free(game->tmp);
	close(fd);
	ft_printf("%s\n", str);
	exit(0);
}

int	check_name(t_game *game, char *name)
{
	game->len.len = ft_strlen(name);
	if (name == 0)
		return (0);
	if (game->len.len < 5)
		return (0);
	if (ft_strncmp(name + game->len.len - 4, ".ber", game->len.len) != 0)
		return (0);
	return (1);
}

void	alloc_tmp(t_game *game)
{
	game->tmp = ft_calloc(sizeof(char), 4096);
	if (!game->tmp)
	{
		free(game->tmp);
		ft_printf("Error\nwrong malloc <map_0>");
		exit(0);
	}
}

void	save_len(t_game *game, char *name)
{
	int	fd;

	game->tmp = ft_calloc(sizeof(char), 4096);
	if (!game->tmp)
	{
		free(game->tmp);
		ft_printf("Error\nwrong malloc <map_0>");
		exit(0);
	}
	fd = open(name, O_DIRECTORY, 0644);
	if (fd > 0)
		kill_main(game, fd, "Error\nInvalid file <save_len>");
	close(fd);
	fd = open(name, O_RDONLY, 0644);
	if (fd == -1)
		kill_main(game, fd, "Error\nwrong open <save_len>");
	game->ct.i = -1;
	while (++game->ct.i >= 0)
	{
		game->tmp[game->ct.i] = get_next_line(fd);
		if (!game->tmp[game->ct.i])
			break ;
	}
	game->len.len_map_y = game->ct.i;
	game->len.len_map_x = ft_strlen(game->tmp[0]) - 1;
}

void	find_player(t_game *game)
{
	game->ct.i = -1;
	while (game->map_0[++game->ct.i])
	{
		game->ct.k = -1;
		while (game->map_0[game->ct.i][++game->ct.k])
		{
			if (game->map_0[game->ct.i][game->ct.k] == 'P')
			{
				game->p1_x = game->ct.k;
				game->p1_y = game->ct.i;
			}
			if (game->map_0[game->ct.i][game->ct.k] == 'Z')
			{
				game->enemy_pos.x = game->ct.k;
				game->enemy_pos.y = game->ct.i;
				game->ct.ct_enemy += 1;
			}
		}
	}
}
