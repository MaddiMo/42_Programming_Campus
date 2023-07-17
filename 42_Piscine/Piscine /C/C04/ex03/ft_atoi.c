/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:32:49 by mmonclus          #+#    #+#             */
/*   Updated: 2022/11/29 20:08:46 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	numb;
	int	sign;

	i = 0;
	sign = 1;
	numb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' || str[i] <= '9')
	{
		numb = (str[i] - '0') + (numb * 10);
		i++;
	}
	return (numb * sign);
}

int	main(void)
{
	char	*str = "---+--+1234ab567";

	printf("%d", ft_atoi(str));
}
