/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:57 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:11:18 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	str_long;

	str_long = ft_strlen(s);
	write(fd, s, str_long);
	return (str_long);
}
