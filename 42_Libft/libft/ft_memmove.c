/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:51:46 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:14:00 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies len bytes from src string to dst string (the amount of bytes specified - if the src is 
shorter than the dst, the dst will end up having the amount of the original src - with the 
amount of len specified). It needs to be taken into account that might be that the two overlap; 
the copy is always done in a non-destructive manner. */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	i = 0;
	if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char dst[60] = "hambre";
	char src[60] = "jopelinassaaaaaaaas";

	printf("before: %s\n", dst);
	ft_memmove(dst, src, 5);
	printf("after: %s", dst);
} */
