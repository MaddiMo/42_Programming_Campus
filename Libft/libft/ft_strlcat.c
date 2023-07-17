/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:40:44 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:24:02 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/*From dst it will take the maximum capacity taken into account with dstsize, 
all of it if dstsize is bigger than the dst length. If dstsize is smaller, 
it will take the amount that can be taken, and it will concatenate the src (src - 1 as a 
null needs to be added to the end of the string). RETURNS the length of the concatenation. */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}

/*int	main(void)
{
	char		dst[16] = "hello";
	const char	src[]= "comida";
	char		dst1[16] = "hello";
	const char	src1[] = "comida";

	printf("%zu\n", ft_strlcat(dst, src, 1));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst, src, 1));
	printf("%s\n", dst1);
	return (0);
}
*/