/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:08:08 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:40:45 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates enough dynamic memory for the copy of s1 + ‘\0’ and copies it. 
RETURNS a pointer to the copy. If there is not enough memory, null will be returned.*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*aux;

	i = -1;
	aux = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!aux)
		return (0);
	while (s1[++i])
		aux[i] = ((char *)s1)[i];
	aux[i] = '\0';
	return (aux);
}

/*int	main(void)
{
	char	s1[] = "hellooo";

	printf("%s\n", ft_strdup(s1));
	printf("%s", strdup(s1));
}
 */