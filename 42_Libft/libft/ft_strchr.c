/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:03:09 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:29:51 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the FIRST ENCOUNTER of c (converted to a char) in the string pointed by s. 
The terminating null character is also considered part of the string. Therefore, if c is ‘\0’, 
the function locates the termination ‘\0’. RETURNS a pointer to the character located. 
If the character does not appear in the string, return NULL. */

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		*aux;

	aux = (char *)s;
	i = -1;
	while (aux[++i] != (char)c)
		if (!aux[i])
			return (0);
	return (&aux[i]);
}

/*int	main(void)
{
	const char *s = "hello";
	int	c = 'e';

	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
}
*/