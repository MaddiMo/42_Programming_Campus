/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:26:18 by mmonclus          #+#    #+#             */
/*   Updated: 2022/10/30 17:05:55 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int empty;
	int start;

	start = 0;
	while (start < size)
	{
		empty = tab[start];
		tab[start] = tab[size -1];
		tab[size -1] = empty;
		start++;
		size--;
	}
}

/*
int	main(void)
{
	int tab[] = {1,2,3,4,5};
	int size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	return(0);
}
*/