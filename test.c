#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int a = 41;
    int b;
    b = 42;
    void    *ptr = &a;
    char word[] = "Hola %s, %cmo manuel %%, y me %i, %d, %u y: %x, jesus te amo %X y %p\n";
    int res  = ft_printf(word, "estas", 'a', b, 56, -67, 123, 0xffffffff, ptr);
    printf("%d\n", res);
    res  = printf(word, "estas", 'a', b, 56, -67, 123, 0xffffffff, ptr);
    printf("%d\n", res);
}