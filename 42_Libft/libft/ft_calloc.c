/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:42:26 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:39:58 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates enough dynamic space in the memory for count objects with size bytes size. 
That memory is filled with bytes of value zero. RETURNS a pointer to the allocated memory. */

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	size_t	i;

	i = -1;
	aux = (char *)malloc(count * size);
	if (!aux)
		return (0);
	while (++i < count * size)
		((char *)aux)[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	printf("%s", calloc(4, 5));
	printf("%s", ft_calloc1(4, 5));
	return (0);
}
 */