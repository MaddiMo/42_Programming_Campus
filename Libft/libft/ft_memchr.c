/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:17:52 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:33:30 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The function locates the FIRST OCCURENCE of c (converted to a char) in the s string.  
Returns a pointer to the byte located, or NULL if the byte does not exist within n bytes. */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
	return (0);
}

/* int	main(void)
{
	char	*s = "hola";
	int		c = 'o';

	printf("%s\n", ft_memchr(s, c, 8));
	printf("%s", memchr(s, c, 8));
} */
