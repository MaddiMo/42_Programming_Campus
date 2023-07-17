/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:22:24 by mmonclus          #+#    #+#             */
/*   Updated: 2022/11/02 20:07:38 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int x;
	int i;

	i = 0;
	while (i <= size - 1)
	{
		if (tab[i] > size[i + 1])
		{
			x = tab[i];
			tab[i] = tab[size + 1];
			tab[i + 1] = x;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int	tab[] = {2, 3, 7, 4, 5};
	int	size;

	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	return (0);
}
