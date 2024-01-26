/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:18:33 by mmonclus          #+#    #+#             */
/*   Updated: 2024/01/20 11:22:14 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	sending_bits(int pid, char c)
{
	size_t	bit;

	bit = -1;
	while (++bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		usleep(100);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
		num++;
	}
	if (num > 1)
		return (0);
	num = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}

int	parseo_pid(const char *argv)
{
	int		flag;
	size_t	j;

	flag = 0;
	j = -1;
	while (argv[++j])
	{
		if ((argv[j] >= 65 && argv[j] <= 90)
			|| (argv[j] >= 97 && argv[j] <= 122))
			return (1);
		if (argv[j] <= 57 && argv[j] >= 48)
			flag = 1;
	}
	if (!flag) 
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		pid;
	size_t	i;

	i = -1;
	if (argc != 3)
	{
		write(2, "not written what requested\n", 27);
		return (0);
	}
	if (parseo_pid(argv[1]))
		return (0);
	pid = ft_atoi(argv[1]);
	if (pid < 0 || !pid)
		return (0);
	while (argv[2][++i])
		sending_bits(pid, argv[2][i]);
	sending_bits(pid, '\n');
	return (0);
}
