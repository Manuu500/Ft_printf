/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:14:37 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:50:27 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbrlong(unsigned int n, int fd)
{
	int	counter;
	char	c;
	
	counter = 0;
	if (n >= 10)
	{
		counter = ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	counter++;
	write (fd, &c, 1);
	return(counter);
}