/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:08:57 by mmonclus          #+#    #+#             */
/*   Updated: 2023/02/16 12:36:31 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*MY LOVELY DEAR SPLIT <3!! 

It creates a substring (ending in null) with substrings (ending in null), 
taking into account the delimiter character specified. */

static int	ft_wordquantity(char const *s, char c)
{
	int	i;
	int	wq;

	i = 0;
	wq = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			wq++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wq);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		i;
	int		j;
	int		start;

	aux = (char **)malloc((ft_wordquantity(s, c) + 1) * sizeof(char *));
	if (!aux || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			aux[j] = ft_substr(s, start, i - start);
			j++;
			continue ;
		}
		i++;
	}
	aux[j] = NULL;
	return (aux);
}

int main(void)
{
	char const *s = NULL;
	char c = ' ';
	char **result = ft_split(s, c);
	int j = 0;

	while (result[j])
	{
		printf("Substr n.%d: %s\n", j, result[j]);
		j++;
	}
	return (0);
}
