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

#include <stdarg.h>
#include <stdio.h>
#include <string.h>


int ft_printf(char const *str, ...)
{
    va_list args;
    size_t  i;
    const   char    *s;
    char    *mem;

    va_start(args, str);
    s = str;
    i = 0;
    mem = malloc(sizeof(char*) * strlen(str) + 1);
    if (!mem)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == "s")
            {
                
            }
        }
        mem[i] = str[i];
        i++;
    }
    
    
    while (s != NULL)
    {
        s = va_arg(args, const char *);
    }
    va_end(args);
}

int main(void)
{
    char word[] = "Hola que tal %s";
    ft_printf(word, "estas");
}
