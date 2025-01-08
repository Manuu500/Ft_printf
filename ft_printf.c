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
    unsigned long d;

    va_start(args, str);
    s = str;
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%' && str[i + 1] != '\0')
        {
            i++;
            if (str[i] == 's')
            {
              s = va_arg(args, char *);
              if (s != NULL)
              {
                while (*s)
                {
                    write(1, s, 1);
                    s++;
                }
              } 
            }
            if (str[i] == 'c')
            {
                s = va_arg(args, int);
                if (s != NULL)
                {
                    write(1, &s, 1);
                }
            }
            if (str[i] == 'p')
            {
                s = va_arg(args, void *);
                d = (unsigned long long)s;
                if (d != NULL)
                {
                    write (1, "0x", 2);
                    write(1, &d, 1);
                }
            }
            if (str[i] == '%')
            {
                s = va_arg(args, char):
                if (s != NULL)
                {
                    write(1, s, 1)
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
    int a;

    a = 42;
    void    *ptr = a;
    char word[] = "Hola que tal %s, me ll%cmo manuel %p %%";
    ft_printf(word, "estas", 'a', (unsigned long)ptr);
}