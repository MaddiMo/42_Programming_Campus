/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:56:54 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 11:32:56 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares the amount of characters that we have specified with n (size_t n). 
Returns an int equal, greater or less than 0, according as the string s1 is equal,
greater or less than string s2.*/  


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*s1 = "abcxdfgsdfg";
	const char	*s2 = "abcdefgxyz";

	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d", strncmp(s1, s2, 6));
} */
