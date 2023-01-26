/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures_p1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:59:44 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 19:11:28 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	init_p1(t_game *game)
{
	init_textures_p1_idle(game);
}

void	init_textures_p1_idle(t_game *game)
{
	int	x;
	int	y;

	game->img.p1.idle.idle_do = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/idle/p1_idle_do_0.xpm", &x, &y);
}
