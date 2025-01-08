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

char    *display_word(char const *str, size_t i, va_list args, const char *s)
{
    char    *mem;
    size_t  j;

    j = 0;
    s = va_arg(args, char *);
    mem = malloc(sizeof(char*) * strlen(s) + 1);
    if (!mem)
        free(mem);
    if (s != NULL)
    {
        while (s[j])
        {
            mem[j] = s[j];
            j++;
        }
        mem[j] = '\0';
    } 
    return (mem);
}

char    *display_char(char const *str, va_list args, const char *s)
{
    char    *mem;

    s = va_arg(args, int);
    mem = malloc(sizeof(char) * strlen(str) + 1);
    if (!mem)
        return (NULL);
    if (s != NULL)
    {
      write(1, &s, 1);
    }
    return (mem);
}

int ft_printf(char const *str, ...)
{
    va_list args;
    size_t  i;
    size_t  j;
    const   char    *s;

    va_start(args, str);
    s = str;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%' && str[i + 1] != '\0')
        {
            i++;
            if (str[i] == 's')
            {
                s = display_word(str, i, args, s);
                if (!s)
                  return (NULL);
            }
            if (str[i] == 'c')
            {
                s = display_char(str, args, s);
                if (!s)
                  free (s);
            }
            if (str[i] == '%')
            {
                write(1, "%", 1);
                s++;
            }
            j = 0;
            while (s[j])
            {
                write(1, &s[j], 1);
                j++;
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
    char word[] = "Hola que tal %s, me ll%cmo manuel %%, y me gustan las cuquitas kkkkkkk %d";
    ft_printf(word, "estas", 'a', '%', 42);
}