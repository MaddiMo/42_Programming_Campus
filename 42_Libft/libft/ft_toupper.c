/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:21:15 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:25:56 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*CONVERTS lowercase letters to capital letters.*/ 

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*
int	main(void)
{
	unsigned char	a = 'm';

	printf("Uppercase of: %c", ft_toupper(a));
	return(0);
}
*/