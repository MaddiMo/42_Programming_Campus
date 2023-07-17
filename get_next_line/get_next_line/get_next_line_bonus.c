/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:15:34 by mmonclus          #+#    #+#             */
/*   Updated: 2023/06/28 18:26:05 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_sta_cleaning(char *sta)
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (sta[i] && sta[i] != '\n')
		i++;
	if (!sta[i])
		if (ft_freeto(sta, -1) == 0)
			return (0);
	aux = (char *)malloc(((ft_strlen(sta) - i) + 1) * sizeof(char));
	if (!aux)
		return (0);
	i++;
	while (sta[i])
		aux[j++] = sta[i++];
	free (sta);
	aux[j] = '\0';
	return (aux);
}

char	*ft_get_line(char *sta)
{
	ssize_t	i;
	char	*line;

	i = 0;
	if (!sta[i])
		return (0);
	while (sta[i] && sta[i] != '\n')
		i++;
	line = (char *)malloc((i + 2) * sizeof(char));
	if (!line)
		return (0);
	i = -1;
	while (sta[++i] && sta[i] != '\n')
		line[i] = sta[i];
	if (sta[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	char static	*sta;
	char		*line;
	char		*buffer;
	ssize_t		count;

	count = 1;
	if (fd < 0 || BUFFER_SIZE == 0)
		return (0);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (0);
	while (!ft_strchr(sta, '\n') && count > 0)
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count == -1 || BUFFER_SIZE <= 0)
			if (ft_freeto(buffer, count) == 0 && ft_freeto(sta, count == 0))
				return (0);
		buffer[count] = '\0';
		sta = ft_strjoin(sta, buffer);
	}
	free (buffer);
	line = ft_get_line(sta);
	sta = ft_sta_cleaning(sta);
	return (line);
}

/*int	main(void)
{
	int		fd;
	char	*result = "";

	fd = open("text_3.txt", O_RDONLY);
	if (fd >= 0)
	{
		while (result != 0)
		{	
			result = get_next_line(fd);
			if (result == 0)
				break ;
			printf("line: %s", result);
		}
	}
	close(fd);
	return (0);
}
*/