/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:13:48 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:06:44 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*If it is a letter (capital or lowercase), RETURNS 1. If not, return 0:*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char a;

	a = ' ';
	printf ("%d\n", ft_isalpha(a);
	printf ("%d", ft_isalpha(a);
	return (0);
}
 */