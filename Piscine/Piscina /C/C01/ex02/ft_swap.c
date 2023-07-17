/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:50:36 by mmonclus          #+#    #+#             */
/*   Updated: 2022/10/30 17:07:14 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	empty;

	empty = *a;
	*a = *b;
	*b = empty;
}

/*
int	main(void)
{
	int	la;
	int	lo;
	int	*x;
	int	*y;

	la = 89;
	lo = 4;
	x = &la;
	y = &lo;
	ft_swap(x, y);
	printf("The new value of la is: %d\nand the new value lo is: %d", la, lo);
}
*/