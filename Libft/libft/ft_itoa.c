/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:05:24 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 12:39:55 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts an int in a string. */

static long	ft_len(long nb)
{
	long	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*aux_neg(char *aux, long nb, int len)
{
	nb = nb * -1;
	aux[0] = '-';
	while (len != 1)
	{
		aux[--len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (aux);
}

char	*ft_itoa(int nb)
{
	char	*aux;
	long	num;
	int		len;

	num = nb;
	len = ft_len(num);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (!aux)
		return (0);
	aux[len] = '\0';
	if (nb < 0)
		aux_neg(aux, num, len);
	if (num == 0)
	{
		aux[--len] = num + '0';
		return (aux);
	}
	while (nb > 0 && len > 0)
	{
		aux[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (aux);
}

/*int	main(void)
{
	int	i = -256;

	printf("%s", ft_itoa(i));
	return (0);
}
*/