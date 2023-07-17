/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:47:17 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 12:34:09 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*From the beginning and the end of s1, when the characters specified in set are found, 
they will be removed from s1.*/

char	*ft_strtrim(char const *s1, char const *set)
{	
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int	main(void)
{
	char	*s1 = " x elloxt ";
	char	*set = " ";

	printf("%s", ft_strtrim(s1, set));
	return(0);
}*/