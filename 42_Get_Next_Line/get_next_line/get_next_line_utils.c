/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:47:33 by mmonclus          #+#    #+#             */
/*   Updated: 2023/06/21 17:05:54 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_freeto(char *cleaning, int count)
{
	if (count < 0 || BUFFER_SIZE <= 0)
	{
		free (cleaning);
		return (0);
	}
	return (1);
}

char	*ft_strchr(char *sta, int c)
{
	ssize_t	i;

	i = -1;
	if (!sta)
		return (0);
	while (sta[++i])
		if (sta[i] == (char)c)
			return ((char *)sta);
	return (0);
}

char	*ft_strjoin(char *sta, char *buffer)
{
	char	*aux;
	ssize_t	i;
	ssize_t	j;

	if (!sta)
	{
		sta = malloc(sizeof(char) * 1);
		sta[0] = '\0';
	}
	if (!sta)
		return (0);
	j = ft_strlen(sta) + ft_strlen(buffer);
	aux = (char *)malloc((j + 1) * sizeof(char));
	if (!aux)
		return (0);
	i = -1;
	while (sta[++i])
		aux[i] = sta[i];
	j = 0;
	while (buffer[j])
		aux[i++] = buffer[j++];
	aux[i] = '\0';
	free (sta);
	return (aux);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
