/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:55:29 by mmonclus          #+#    #+#             */
/*   Updated: 2023/06/28 16:46:28 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_get_line(char *sta);
char	*ft_sta_cleaning(char *sta);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *sta, char *buffer);
char	*ft_strchr(char *sta, int c);
int		ft_freeto(char *buffer, int count);

#endif
