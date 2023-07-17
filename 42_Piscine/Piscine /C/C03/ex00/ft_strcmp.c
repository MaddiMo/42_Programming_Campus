/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:10:03 by mmonclus          #+#    #+#             */
/*   Updated: 2022/11/03 21:36:24 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		++i;
	}
	return (s1[i] - s2[i]);
}


#include <stdio.h>

int	main(void)
{
	char s1[] = "SeCoti";
	char s2[] = "Second";
	
	printf("%d\n", ft_strcmp(s1, s2)); 
}
