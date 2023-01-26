/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_fd_RDWR_CRTR.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:35:49 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/13 14:15:17 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_open_fd_rdwr_crtr(char *str)
{
	static int	fd;

	fd = open(str, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (!fd)
		return (-1);
	return (fd);
}
