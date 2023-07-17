/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:25:01 by mmonclus          #+#    #+#             */
/*   Updated: 2022/11/01 16:23:16 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "2a34234324234324";
	
	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/
