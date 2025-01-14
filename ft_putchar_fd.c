/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:01:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:09:12 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	int	counter;

	counter = 0;
	write (fd, &c, 1);
	counter++;
	return (counter);
}
