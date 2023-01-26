/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fd_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:52:09 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/15 11:12:36 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_fd_len(char *name)
{
	char	*buffer;
	int		len;
	int		fd;

	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	fd = open(name, O_RDONLY);
	if (!fd || fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	len = read(fd, buffer, BUFFER_SIZE);
	if (len < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (ft_strlen(buffer));
}
