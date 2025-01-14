/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:22:14 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:15:03 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbr_fd(int n, int fd)
{
	int	counter;
	char	c;

	counter = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	if (n == -2147483648)
		write (fd, "2147483648", 10);
	else
	{
		c = n % 10 + '0';
		write (fd, &c, 1);
		counter++;
	}
	return(counter);
}
