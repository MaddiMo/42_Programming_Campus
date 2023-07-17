/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:02:13 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 13:24:52 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*To each character of the string s, the function f will be applied. 
A new string will be created with the results of the results of the f function. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*aux;

	i = -1;
	aux = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!aux)
		return (0);
	if (!s)
		return (0);
	while (s[++i])
		aux[i] = f(i, s[i]);
	aux[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	char	s[] = "hellooo";

	prinft("%s", ft_strmapi)
} */