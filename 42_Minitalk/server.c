/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:18:23 by mmonclus          #+#    #+#             */
/*   Updated: 2024/01/20 11:14:39 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	handling_it(int sig)
{
	static int	bit;
	static int	byte;

	if (sig == SIGUSR1)
		byte |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd (byte, 1);
		bit = 0;
		byte = 0;
	}
}

void	ft_putnbr_fd(int pid, int fd)
{
	if (pid < 0)
	{
		ft_putchar_fd('-', 1);
		pid = pid * -1;
	}
	if (pid > 9)
		ft_putnbr_fd((pid / 10), fd);
	ft_putchar_fd((pid % 10) + '0', 1);
}

int	main(int argc, char *argv[])
{
	pid_t	pid;

	(void)argv;
	if (argc != 1)
	{
		write(2, "try again\n", 11);
		return (0);
	}
	pid = getpid();
	write(1, "Server's PID number is: ", 24);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, handling_it);
		signal(SIGUSR2, handling_it);
		pause();
	}
	return (0);
}
