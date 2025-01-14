/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:57:27 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:41:33 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	get_num_length(unsigned long a)
{
	size_t	i;

	i = 0;
	if (a == 0)
		i = 1;
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}


int	ft_print_hex(unsigned long number, int upper)
{
	unsigned int	n;
	int	i;
	char	*hex;
	char	*base;
	int	counter;

	counter = 0;
	n = get_num_length(number);
	i = n - 1;
	if (upper == 1)
		base = ft_strdup("0123456789ABCDEF");
	else
		base = ft_strdup("0123456789abcdef");
	hex = malloc(sizeof(char) * n + 1);
	hex[n] = 0;
	while (i >= 0)
	{
		hex[i] = base[number % 16];
		number /= 16;
		// write(1, &num_hex, 1);
		i--;
	}
	i = 0;
	while (hex[i])
	{
		write(1, &hex[i], 1);
		counter++;
		i++;	
	}
	free(hex);
	return(counter);
}