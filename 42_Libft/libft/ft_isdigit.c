/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:20:45 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:06:05 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*If it is a number (0 to 9), RETURNS 1. If not, return 0:*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/* OR
int	ft_isdigit(int c)
{
	return(c >= 48 && c <= 57);
}
 */

/*
int	main(void)
{
	printf ("%d", ft_isdigit('9'));
	return (0);
}
*/