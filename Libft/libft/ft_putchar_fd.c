/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:53:46 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 13:19:00 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*A file descriptor is a key to a data structure in the core that contains all the 
details of the current open files/directories, character devices, etc.
This structure is called “table of open files”, and its process has its own:*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	char	c = 'c';
	int		fd = 5;

	ft_putchr_fd(c, fd);
	return (0);
}
 */