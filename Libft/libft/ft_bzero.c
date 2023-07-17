/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:36:51 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:11:41 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies the amount of size_t n (n will be the amount of null characters to add) in string s.*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char s[60] = "hellolita";

	printf ("%s\n", &s[0]);
	ft_bzero(s, 3);
	bzero(s, 3);
	printf ("%s\n", s);
	printf ("%s\n", &s[1]);
	printf ("%s\n", &s[4]);
	return (0);
} */
