/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:25:41 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 10:38:41 by mruiz-ur         ###   ########.fr       */
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
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbrsign (unsigned int	num);
void	ft_putnbrlong(unsigned int n, int fd);
void	ft_print_hex(unsigned int	number, int	upper);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
int ft_printf(char const *str, ...);


#endif