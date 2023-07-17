/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:27:33 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/23 18:20:57 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

 int	main(void)
{
	char s[]	= "hellooooo";

	ft_putstr_fd (s, 1);
	return (0);
}
 