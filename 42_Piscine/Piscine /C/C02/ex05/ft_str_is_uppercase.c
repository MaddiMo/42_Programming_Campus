/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:41:51 by mmonclus          #+#    #+#             */
/*   Updated: 2022/11/01 16:23:19 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		i++;
		else
			return (0);
	}
	return (1);
}
/*  
int	main(void)
{
	char	str[] = "QWEQEFWEFWEEFWWCWCWEC";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/
