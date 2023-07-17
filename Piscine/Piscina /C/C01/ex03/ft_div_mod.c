/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:02:59 by mmonclus          #+#    #+#             */
/*   Updated: 2022/10/30 17:08:37 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*si;
	int	*no;

	a = 26;
	b = 5;
	si = &a;
	no = &b;
	ft_div_mod(a, b, si, no);
	printf("a divided by b, is now stored in a= %d, and the rest in b= %d", a, b);
}
*/