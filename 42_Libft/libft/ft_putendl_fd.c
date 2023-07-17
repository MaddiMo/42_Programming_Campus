/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:23:35 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/16 16:07:41 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (s && fd)
		while (s[++i])
			write (fd, &s[i], 1);
	write(fd, "\n", 1);
}

/* int	main(void)
{
	char s[]	= "hellooooo";

	ft_putendl_fd (s, 1);
	return (0);
}
 */