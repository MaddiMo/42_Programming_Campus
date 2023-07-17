/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:24:54 by mmonclus          #+#    #+#             */
/*   Updated: 2022/10/26 15:13:09 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	b;

	b = '0';
	while (b <= '9')
	{
		write (1, &b, 1);
		b++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/