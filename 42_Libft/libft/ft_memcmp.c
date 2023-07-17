/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:34:23 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:34:37 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares the amount of byte spicified in strings s1 against string s2. 
It is assumed that both strings are n bytes long. Returns 0 if both strings are identical. 
RETURNS the subtract between characters of the first different appearance.  */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}

/*int	main(void)
{
	char	*s1 = "hosaLA";
	char	*s2 = "hosan";

	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d", memcmp(s1, s2, 10));
}
*/