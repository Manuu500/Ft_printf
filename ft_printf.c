/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:42:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/01/13 12:59:46 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <unistd.h>
// #include <stdarg.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// char    *display_word(char const *str, size_t i, va_list args, const char *s)
// {
//     char    *mem;
//     size_t  j;

//     j = 0;
//     s = va_arg(args, char *);
//     mem = malloc(sizeof(char*) * strlen(s) + 1);
//     if (!mem)
//         free(mem);
//     if (s != NULL)
//     {
//         while (s[j])
//         {
//             mem[j] = s[j];
//             j++;
//         }
//         mem[j] = '\0';
//     } 
//     return (mem);
// }

// char    *display_char(char const *str, va_list args, const char *s)
// {
//     char    *mem;

//     s = va_arg(args, char *);
//     mem = malloc(sizeof(char) * strlen(str) + 1);
//     if (!mem)
//         return (NULL);
//     if (s != NULL)
//     {
//       write(1, &s, 1);
//     }
//     return (mem);
// }

int ft_printf(char const *str, ...)
{
    va_list args;
    size_t  i;
    char    *s;
    int a;

    va_start(args, str);
    s = (char *)str;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%' && str[i + 1] != '\0')
        {
            i++;
            if (str[i] == 's')
            {
                s = va_arg(args, char *);
                ft_putstr_fd(s, 1);
            }
            else if (str[i] == 'c')
            {
                a = va_arg(args, int);
                ft_putchar_fd(a, 1);
            }
            else if (str[i] == '%')
                ft_putchar_fd('%', 1);
            else if (str[i] == 'i' || str[i] == 'd')
            {
                a = va_arg(args, int);
                ft_putnbr_fd(a, 1);
            }
            else if (str[i] == 'u')
            {
                a = va_arg(args, int);
                ft_putnbrsign(a);
            }
            else if (str[i] == 'x')
            {
                a = va_arg(args, int);
            }
        }
        else
          ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end(args);
    return (1);
}

int main(void)
{
    int a;
    int b;
    b = 42;
    void    *ptr = a;
    char word[] = "Hola que tal %s, me ll%cmo manuel %%, y me gustan las cuquitas kkkkkkk %i, soy el esclavo numero %d, jesus te quiero %u y esto es hexadecimal: %x";
    ft_printf(word, "estas", 'a', b, 56, -67, 123);
}