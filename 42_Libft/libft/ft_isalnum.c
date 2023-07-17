/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:24:01 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 12:40:36 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*If it is a letter (capital or lowercase) or a number (0 to 9), RETURNS 1. If not, return 0.*/

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf ("%d\n", ft_isalnum('9'));
	printf ("%d", isalnum('9'));
	return (0);
}
 */