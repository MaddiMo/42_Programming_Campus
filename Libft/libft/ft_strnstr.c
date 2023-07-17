/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:21:59 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:35:49 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locate a string within a string. Locates the FIRST OCCURRENCE of the termination-null 
string needle, in the termination-null string haystack. 
	a) If  needle is an empty string, returns haystack
	b) Returns a pointer to a character to the first occurrence in needle. 
	c) If needle is not found in haystack, returns NULL*/


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*haystack = "hola que";
	const char	*needle = "que";

	printf("%s\n", needle);
	printf("%s\n", ft_strnstr(haystack, needle,6));
	printf("%s", strnstr(haystack, needle, 6));
}*/