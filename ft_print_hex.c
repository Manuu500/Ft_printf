/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:57:27 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/13 13:32:47 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h";

static size_t	get_num_length(int a)
{
	size_t	i;

	i = 0;
	if (a == 0)
		i = 1;
	if (a < 0)
	{
		a = a * -1;
		i++;
	}
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}


void	ft_print_hex(unsigned int number, int upper)
{
	unsigned int	n;
	size_t	i;
	char	*hex;
	char	num_hex;

	i = n - 1;
	n = get_num_length(number);
	if (upper == 1)
		hex = ft_strdup("0123456789ABCDEF");
	else
		hex = ft_strdup("0123456789abcdef");
	while (i >= 0)
	{
		num_hex = hex[number % 16];
		number /= 16;
		write(1, &num_hex, 1);
		i--;
	}
}