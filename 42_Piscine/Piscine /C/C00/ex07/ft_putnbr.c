/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:09:27 by mmonclus          #+#    #+#             */
/*   Updated: 2022/10/27 11:14:02 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb / 10 == 0)
		{
			c = nb + '0';
			write(1, &c, 1);
		}
		else
		{
			c = nb % 10 + '0';
			ft_putnbr(nb / 10);
			write(1, &c, 1);
		}
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
