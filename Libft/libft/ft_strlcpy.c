/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:07:12 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:15:16 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies in dst, the amount of characters of source requested by dstsize (it needs to be 
taken into account that the last space is for null - ‘\0’). Therefore, dstsize - 
1 will need to be copied, as the last space is for null. The function RETURNS the len of src. */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int main(void)
{
	char dst[] = "hello hello";
	const char src[] = "jo";

	printf("%zu - %s\n", strlcpy(dst, src, 3), dst);
	printf("%zu - %s", ft_strlcpy(dst, src, 3), dst);
	return(0);
} 
*/