/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:06:04 by dantremb          #+#    #+#             */
/*   Updated: 2022/08/25 01:00:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Calculer le nombre de caractère jusqu'a premier caractere NULL. On avance  */
/* dans "str" avec un compteur et on retourne le compteur quand on rencontre  */
/* un caractère NULL.														  */

#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
	{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
