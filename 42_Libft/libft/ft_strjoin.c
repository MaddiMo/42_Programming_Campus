/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:26:15 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:46:18 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates dynamic memory to concatenate s1 + s2 + ‘\0’. 
RETURNS a pointer to the created new variable.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	int		i;
	int		j;

	i = -1;
	if (!s1 && !s2)
		return (0);
	aux = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!aux)
		return (0);
	while (s1[++i])
		aux[i] = s1[i];
	j = -1;
	while (s2[++j])
	{
		aux[i] = s2[j];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	char	s1[] = "hola";
	char	s2[] = "hello";

	printf ("%s", ft_strjoin(s1, s2));
	return (0);
} 
 */