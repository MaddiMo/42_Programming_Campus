/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelasa-a <lelasa-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:26:04 by lelasa-a          #+#    #+#             */
/*   Updated: 2022/10/16 19:16:57 by lelasa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

//First corners: topleft, topright, bottomleft, bottomright
//Then body: horizontal, vertical, center
void	ft_imprimir(int x, int y, int f, int c)
{
	if (f == 1 && c == 1)
		ft_putchar('/');
	else if (f == 1 && c == x)
		ft_putchar('\\');
	else if (f == y && c == 1)
		ft_putchar('\\');
	else if (f == y && c == x)
		ft_putchar('/');
	else if ((f == 1 && (c > 1 && c < x)) || ((f == y) && (c > 1 && c < x)))
		ft_putchar('*');
	else if ((c == 1 && (f > 1 && f < y)) || ((c == x) && (f > 1 && f < y)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

//rush: outer loop for rows and inner loop for cols
void	rush(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			ft_imprimir(x, y, f, c);
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
