/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:18:48 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:09:05 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies c (casted to an unsigned char) 
in ptr, the bytes quantity of n specified. RETURNS ptr (void *). */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (char)c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char ptr[10]= "hellohello";

	printf("%s\n", ft_memset(ptr, 'x', 4));
	printf("%s", memset(ptr, 'x', 4));
	return (0);
} */
