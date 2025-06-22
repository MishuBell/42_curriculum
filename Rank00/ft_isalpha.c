#include "libft.h"

/*
Gibt true zurück, wenn der übergebene Wert c entweder ein Kleinbuchstabe (a-z) oder Großbuchstabe (A-Z) ist
*/

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

