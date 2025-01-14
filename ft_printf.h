/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:25:41 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:39:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

size_t	ft_strlen(const char *str);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbrsign (unsigned int	num);
int	ft_putnbrlong(unsigned int n, int fd);
int	ft_print_hex(unsigned long	number, int	upper);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
int ft_printf(char const *str, ...);


#endif