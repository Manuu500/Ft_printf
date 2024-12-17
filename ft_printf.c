/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:42:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/12/08 18:42:06 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ft_printf(char const *str, ...)
{
    va_list args;
    size_t  i;
    size_t  j;
    const   char    *s;
    char    *mem;

    va_start(args, str);
    s = str;
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%' && str[i + 1] == 's')
        {
            s = va_arg(args, const char *);
            if (s != NULL)
            {
                while (*s)
                {
                    write(1, s, 1);
                    s++;
                }
            }
            i++;
        }
        if (str[i] == '%' && str[i + 1] == 'c')
        {
            s = va_arg(args, const char);
            if (s != NULL)
            {
                while (*s)
                {
                    write(1, s, 1);
                    s++;
                }
            }
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
    va_end(args);
}

int main(void)
{
    char word[] = "Hola que tal %s, me ll%cmo manuel";
    ft_printf(word, "estas", 'a');
}
