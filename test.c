#include "ft_printf.h"

int main(void)
{
    int a = 41;
    int b;
    b = 42;
    void    *ptr = &a;
    char word[] = "Hola que tal %s, me ll%cmo manuel %%, y me gustan las cuquitas kkkkkkk %i, soy el esclavo numero %d, jesus te quiero %u y esto es hexadecimal: %x, jesus te amo %X y aqui un puntero de esos %p";
    ft_printf(word, "estas", 'a', b, 56, -67, 123, 0xffffffff, ptr);
}