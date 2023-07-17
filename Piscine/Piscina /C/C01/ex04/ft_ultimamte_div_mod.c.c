/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimamte_div_mod.c.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:25:59 by mmonclus          #+#    #+#             */
/*   Updated: 2022/10/30 17:13:31 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	x;
	int	y;
	int	*p1;
	int	*p2;

	x = 26;
	y = 5;
	p1 = &x;
	p2 = &y;
	ft_ultimate_div_mod(p1, p2);
	printf("Now x is: %d, and y is: %d.", *p1, *p2);
}
*/