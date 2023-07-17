/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:17:50 by mmonclus          #+#    #+#             */
/*   Updated: 2023/06/19 15:26:22 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_freeto(char *cleaning, int count)
{
	if (count == -1 || BUFFER_SIZE <= 0)
	{
		free (cleaning);
		cleaning = 0;
		return (0);
	}
	return (1);
}

char	*ft_strchr(char *sta, int c)
{
	int	i;

	i = 0;
	if (!sta)
		return (0);
	while (sta[i])
	{
		if (sta[i] == (char)c)
			return ((char *)sta);
		i++;
	}
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
	if (!sta || !buffer)
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
