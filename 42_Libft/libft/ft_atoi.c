/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:09:19 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:39:00 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the string of char (the digital numbers) to int. It ignores the spaces before 
the number and it can only contain one sign. If there is more than one sign before 
the numbers (‘-’ or ‘+’), returns 0 as it is an error. */

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
		num++;
	}
	if (num > 1)
		return (0);
	num = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}

/*int	main(void)
{
    char	*str = "-123";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}
*/