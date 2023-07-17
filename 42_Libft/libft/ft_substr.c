/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:39:59 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:45:15 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Create a substring from a string, starting from the indicated character by start, 
with the length indicated by len + ‘\0’ to close the substring .
RETURNS a pointer to the substring. */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (!aux)
		return (0);
	i = 0;
	if (start > ft_strlen(s))
	{	
		aux[i] = '\0';
		return (aux);
	}
	while (len > 0 && s[start])
	{
		aux[i] = s[start];
		i++;
		start++;
		len--;
	}
	aux[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	char s[] = "hola";

	printf("%s\n", ft_substr(s, 2, 30));
	return (0);
}
 */