/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:02:37 by dantremb          #+#    #+#             */
/*   Updated: 2022/11/23 23:12:49 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_free(void *ptr)
{
	if (ptr)
		free(ptr);
	return (NULL);
}
