/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:42:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/14 13:38:31 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(char const *str, ...)
{
    va_list args;
    size_t  i;
    size_t counter;

    va_start(args, str);
    counter = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%' && str[i + 1] != '\0')
        {
            i++;
            if (str[i] == 's')
                counter += ft_putstr_fd(va_arg(args, char *), 1);
            else if (str[i] == 'c')
                counter += ft_putchar_fd(va_arg(args, int), 1);
            else if (str[i] == '%')
                counter += ft_putchar_fd('%', 1);
            else if (str[i] == 'i' || str[i] == 'd')
                counter += ft_putnbr_fd(va_arg(args, int), 1);
            else if (str[i] == 'u')
                counter += ft_putnbrsign(va_arg(args, unsigned int));
            else if (str[i] == 'x')
                counter += ft_print_hex(va_arg(args, unsigned int), 0);
            else if (str[i] == 'X')
                counter += ft_print_hex(va_arg(args, unsigned int), 1);
            else if (str[i] == 'p')
            {
                ft_putstr_fd("0x", 1);
                counter +=2;
                counter += ft_print_hex((unsigned long)va_arg(args, void   *), 0);
            }
        }
        else
          counter += ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end(args);
    return (counter);
}